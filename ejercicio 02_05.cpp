// Fecha creación: 27/08/2023
// Fecha modificación: 27/08/2023
// Número de ejericio: 5
// Problema planteado:Un arreglo contiene las estaturas en cm de N personas (estatura al azar en un rango de 50 a 240), determinar la mayor estatura, la estatura más baja y el promedio de estaturas.
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int N;
    cout<<"ingrese el numero de personas: ";cin>>N;
    int estaturas[N];
    srand(time(NULL));
    for (int i=0; i<N; i++) {
            estaturas[i] = 50+rand()%(240-50+1);
    }
    cout << "Las estaturas son: " << endl;
    for (int i=0; i<N; i++) {
            cout << estaturas[i] << " ";
    }cout << endl;
    int mayor = estaturas[0]; int menor = estaturas[0];
    double suma = 0;
    double promedio = 0.0;
    for (int i=0; i<N; i++) {
            if (estaturas[i]>mayor){
                mayor = estaturas[i];
    }
    if (estaturas[i] < menor) {
            menor = estaturas[i];
    }
    suma += estaturas[i];
    }
    promedio=suma / N;
    cout << "La mayor estatura es " << mayor << endl;
    cout << "La menor estatura es " << menor << endl;
    cout << "El promedio de estaturas es " << promedio << endl;
  return 0;
}
