// Fecha creaci�n: 31/08/2023
// Fecha modificaci�n: 31/08/2023
// N�mero de ejericio: 24
// Problema planteado: Leer una cadena en may�sculas y c�mbielas en min�scula.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena en may�sculas: ";cin >> cadena;
    for (int i = 0; i < cadena.length(); i++){
            if (cadena[i] >= 'A' && cadena[i] <= 'Z'){
                cadena[i] = cadena[i] + 32;
            }
    }
    cout << "La cadena en min�scula es: " << cadena << endl;


    return 0;
}
