// Fecha creaci�n: 30/08/2023
// Fecha modificaci�n: 30/08/2023
// N�mero de ejericio: 23
// Problema planteado: Leer 2 vectores de dimensi�n N y combine ambos en otro vector.
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimensi�n de los vectores: ";cin >> N;
    int vector1[N];
    int vector2[N];
    int vector3[2*N];
    cout<<"Ingrese el vector1: "<<endl;
    for (int i=0; i < N; i++){
            cin>>vector1[i];
    }
    cout << "Ingrese el vector2: " << endl;
    for (int i = 0; i<N; i++){
            cin >> vector2[i];
    }
    for (int i= 0; i<N; i++) {//combinar 1 y 2
            vector3[i]= vector1[i];
            vector3[i+N] = vector2[i];
    }
    cout << "El nuevo vector es: " << endl;
    for (int i = 0; i < 2 * N; i++){
            cout << vector3[i] << " ";
    }cout << endl;


    return 0;
}
