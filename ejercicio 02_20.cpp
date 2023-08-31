// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 20
// Problema planteado: Crea un programa que pida un número al usuario un número de mes (por ejemplo, el 4) y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector. Para simplificarlo vamos a suponer que febrero tiene 28 días.
#include <iostream>
using namespace std;

int main() {
    string meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int numero;
    cout<<"Ingrese un numero de mes 1-12: ";cin >> numero;
    if (numero < 1, numero>12) {
            cout << "Numero de mes inválido." << endl;
    }
    cout<<"El mes numero "<<numero<<" es "<<meses[numero-1]<<" y tiene "<<dias[numero-1]<<" dias."<<endl;


    return 0;
}
