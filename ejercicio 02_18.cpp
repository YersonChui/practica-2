// Fecha creación: 29/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 18
// Problema planteado: - Programa que declare un vector de diez elementos enteros y pida números para rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se debe imprimir el vector (sólo los elementos introducidos).
#include <iostream>
using namespace std;

int main() {
    int vector[10];
    int cont=0, numero;
    cout << "Ingrese numeros positivos para rellenar,max 10: " << endl;
    do{
            cin >> numero;
            if (numero >= 0) {
                    vector[cont] = numero;
                    cont++;
            }
    }while (numero>=0 && cont<10);
    cout << "El vector introducido es: " << endl;
    for (int i = 0; i < cont; i++) {
            cout << vector[i] << " ";
    }cout << endl;


    return 0;
}
