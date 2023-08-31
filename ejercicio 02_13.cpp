// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Número de ejericio: 13
// Problema planteado: Almacenar en un arreglo los n primeros números primos.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el valor de n: ";cin >> n;
    int primos[n];
    int contador=0,opcion=2;
    while (contador<n) {
            int es_primo=1; //1 ver y 0 falso
            for (int divisor = 2; divisor * divisor <= opcion; divisor++) {
                    if (candidato % divisor == 0) {
                        es_primo = 0;
                        break;
                    }
            }
            if (es_primo==1) {
                    primos[contador]=opcion;
            contador++;
            }
            opcion++;
    }
    cout << "Los primeros " << n << " primos son: ";
    for (int i = 0; i < n; i++) {
            cout << primos[i] <<" ";
    }cout << endl;

    return 0;
}
