// Fecha creación: 27/08/2023
// Fecha modificación: 27/08/2023
// Número de ejericio: 3
// Problema planteado: Escribir un programa que genere un arreglo de 50 posiciones con números al azar en el rango de A - B y determine cuántos de estos elementos son números primos.
#include <iostream>

#include <ctime>
using namespace std;

int es_primo(int n) {// Función que dice si el nmero es primo
    if (n<=1) return 0;
    for (int i=2; i*i<=n; i++) {
            if (n%i==0) return 0; // no esprimo
    }
    return 1; // Es primo
}
int main() {
    int A,B;
    cout<<"inserte el rango A: ";cin>>A;
    cout<<"inserte el rango B: ";cin>>B;
    int arr[50];
    srand(time(NULL));//semilla aleatoria
    for (int i = 0; i < 50; i++) {
            arr[i] = A+rand()%(B - A + 1);
            cout << arr[i] << " ";
            }
            cout << endl;
    int cont = 0;
    for (int i = 0; i < 50; i++) {
            cont += es_primo(arr[i]); // Sumar uno si el número es primo
    }
    cout<<"Hay "<<cont<< " numeros primos en el arreglo." << endl;
    return 0;
}
