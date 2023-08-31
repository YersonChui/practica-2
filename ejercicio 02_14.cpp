// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 14
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N, M;
    cout << "Ingrese el valor de N: ";cin >> N;
    cout << "Ingrese el valor de M: ";cin >> M;
    vector<int> arreglo1;
    vector<int> arreglo2;
    srand(time(NULL));
    for (int i = 0; i < 10; i++){
        int numero = N + rand() % (M - N + 1);
        arreglo1.push_back(numero);
        int original = numero;
        int invertido = 0;
        while (numero > 0){
            int resto = numero % 10;
            invertido = invertido * 10 + resto;
            numero = numero / 10;
        }
        if (invertido == original){
            arreglo2.push_back(original);
        }
    }
    cout << "El primer arreglo es: ";
    for (int i = 0; i < arreglo1.size(); i++){
        cout << arreglo1[i] << " ";
    }cout << endl;
    cout << "El segundo arreglo es: ";
    for (int i = 0; i < arreglo2.size(); i++){
        cout << arreglo2[i] << " ";
    }
    cout << endl;
}
