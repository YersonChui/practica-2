// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 21
// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
using namespace std;

int main() {
    int vector1[5];
    int vector2[5];
    int vector3[5];
    cout << "Ingrese los valores para el vector1: " << endl;
    for (int i=0; i<5; i++) {
            cin >> vector1[i];
    }
    cout << "Ingrese los valores para el vector2: " << endl;
    for (int i=0; i<5; i++) {
            cin >> vector2[i];
    }
    for (int i=0; i<5; i++) {
            vector3[i] = vector1[i] + vector2[i];
    }
    cout << "El vector3 es: " << endl;
    for (int i=0; i<5; i++) {
            cout << vector3[i] << " ";
    }cout << endl;


    return 0;
}

