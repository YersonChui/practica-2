// Fecha creación: 29/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 17
// Problema planteado: Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 100). A continuación, debe mostrar todas las notas, la nota media, la nota más alta que ha sacado y la menor.

#include <iostream>
using namespace std;

int main() {
    int notas[5];
    cout << "Ingrese las 5 notas del alumno: " << endl;
    for (int i = 0; i < 5; i++) {
            cin >> notas[i];
    }
    double suma = 0;
    int maximo = notas[0];
    int minimo = notas[0];
    for (int i = 0; i < 5; i++) {//notas
            suma += notas[i];
            if (notas[i] > maximo) {
                    maximo = notas[i];
            }
            if (notas[i] < minimo) {
                    minimo = notas[i]; //nota min
            }
    }
    double media = suma / 5;
    cout << "Las notas del alumno son: " << endl;
    for (int i=0; i<5; i++) {
            cout << notas[i] << " ";
    }cout << endl;
    cout << "La nota media es " << media << endl;
    cout << "La nota más alta es " << maximo << endl;
    cout << "La nota más baja es " << minimo << endl;

    return 0;
}
