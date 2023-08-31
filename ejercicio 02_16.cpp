// Fecha creación: 29/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 16
// Problema planteado:Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con datos leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso, y muéstralo por la pantalla

#include <iostream>
#include <string>
using namespace std;

int main() {
    string vector[5];
    cout << "Ingrese 5 cadenas de caracteres: " << endl;
    for (int i=0; i<5; i++) {
            cin >> vector[i]; // Leera la cadena y la guardara en el vector
    }
    string inverso[5];
    for (int i=0; i<5; i++) {
            inverso[i] = vector[4 - i]; // inv
    }
    cout << "El vector inverso es: " << endl;
    for (int i=0; i<5; i++) {
            cout << inverso[i] << " ";
    }cout << endl;

    return 0;
}
