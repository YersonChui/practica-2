// Fecha creaci�n: 28/08/2023
// Fecha modificaci�n: 28/08/2023
// N�mero de ejericio: 11
// Problema planteado:Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviaci�n t�pica.
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
    cout << "La desviaci�n t�pica de las edades es: " << desviacion << endl;
  } else{
    cout << "No se puede calcular la desviaci�n t�pica sin datos." << endl;
  }
  return 0;
}
