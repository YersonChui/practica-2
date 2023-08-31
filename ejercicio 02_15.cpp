// Fecha creación: 29/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 15
// Problema planteado: - Realizar un programa que defina un vector de 10 enteros, a continuación lo inicialice con valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int vector[10];
    for (int i=0; i<10; i++) {
            vector[i] = rand()%10+1;
    }
    cout << "Elemento  | Cuadrado  | Cubo" << endl;
    for (int i=0; i<10; i++) {
            cout<<vector[i]<< "_______| "<<vector[i]*vector[i]<< "_______| "<<vector[i]*vector[i]*vector[i]<<endl;
    }
    return 0;
}
