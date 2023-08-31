// Fecha creaci�n: 29/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 18
// Problema planteado: - Programa que declare un vector de diez elementos enteros y pida n�meros para rellenarlo hasta que se llene el vector o se introduzca un n�mero negativo. Entonces se debe imprimir el vector (s�lo los elementos introducidos).
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
