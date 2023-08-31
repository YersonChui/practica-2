// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Número de ejericio: 11
// Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int MAX = 100;
    int edades[MAX];
    int n = 0,edad;
    double suma = 0,promedio,cuadrados=0,desviacion;
    cout << "Ingrese una edad este terminara al ingresar -1: ";cin >> edad;
    while (edad != -1 && n < MAX){
            edades[n] = edad;// Aumenta el contador de edades
            n++;
            suma += edad;
            cout << "Ingrese otra edad (o -1 para terminar): ";cin >> edad;
}if (n > 0){
    promedio = suma / n;
    for (int i = 0; i < n; i++){
            cuadrados += pow(edades[i] - promedio, 2);
    }
    desviacion = sqrt(cuadrados / n);
    cout << "La desviación tipica de las edades es: " << desviacion << endl;
  } else{
    cout << "No se puede calcular la desviación tipica si no se tiene datos." << endl;
  }
  return 0;
}
