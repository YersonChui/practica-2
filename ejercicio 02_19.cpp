// Fecha creaci�n: 29/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 19
// Problema planteado: Hacer un programa que inicialice un vector de n�meros con valores aleatorios, y posterior ordene los elementos de menor a mayor.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n = 10;
    int vector[n];
    for (int i=0; i<n; i++){
            vector[i] = rand()%100+1;
    }
    cout << "El vector antes de ordenarlo es: " << endl;//antes de ordenar
    for (int i = 0; i < n; i++) {
            cout << vector[i] << " ";
    }cout << endl;
    for (int i = 0; i < n - 1; i++) {//menor a mayor
            int minimo = vector[i]; //el menor a posicion i
            int indice_minimo = i;
            for (int j = i + 1; j < n; j++) {
                    if (vector[j] < minimo) {//si la pocision j es menor
                        minimo = vector[j];
                        indice_minimo = j;
                    }
            }
            int aux = vector[i]; // Guardar el elemento en la posici�n i
            vector[i] = minimo;
            vector[indice_minimo] = aux;
    }
    cout << "El vector despu�s de ordenarlo es: " << endl;
    for (int i=0; i<n; i++) {
            cout << vector[i] << " ";
    }cout << endl;


    return 0;
}
