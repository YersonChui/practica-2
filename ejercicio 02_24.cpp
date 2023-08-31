// Fecha creación: 31/08/2023
// Fecha modificación: 31/08/2023
// Número de ejericio: 24
// Problema planteado: Leer una cadena en mayúsculas y cámbielas en minúscula.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena en mayúsculas: ";cin >> cadena;
    for (int i = 0; i < cadena.length(); i++){
            if (cadena[i] >= 'A' && cadena[i] <= 'Z'){
                cadena[i] = cadena[i] + 32;
            }
    }
    cout << "La cadena en minúscula es: " << cadena << endl;


    return 0;
}
