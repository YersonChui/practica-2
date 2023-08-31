// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int N;
    cout<<"Ingrese el tamaño del vector: ";cin>>N;
    vector<int> v(N);
    srand(time(NULL));
    for (int i = 0; i < N; i++){
            int numero = 1 + rand() % 100;
            v[i] = numero;
    }
    int mayor = v[0];
    int menor = v[0];
    double suma = 0;
    for (int i = 0; i < N; i++){
        if (v[i] > mayor){
                mayor = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }
        suma += v[i];
    }
    double promedio =suma/ N;
    cout << "El mayor elemento es: " << mayor<<endl;
    cout << "El menor elemento es: " << menor<<endl;
    cout << "El promedio es: " << promedio <<endl;
    return 0;
}
