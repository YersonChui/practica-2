// Fecha creación: 30/08/2023
// Fecha modificación: 30/08/2023
// Número de ejericio: 22
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Ingrese la dimension para lo vectores: ";cin >> N;
    int vector1[N];
    int vector2[N];
    int vector3[N];
    cout << "Ingresevalores del vector1: " << endl;
    for (int i=0; i<N; i++) {
            cin>>vector1[i];
    }
    cout << "Ingrese valores del vector2: " << endl;
    for (int i=0; i<N; i++){
            cin>>vector2[i];
    }
    for (int i=0; i<N; i++){
            vector3[i] = vector1[i] * vector2[i];
    }
    cout<<"El vector3 es: "<<endl;
    for (int i=0; i<N; i++){
            cout << vector3[i] << " ";
    }cout << endl;

    return 0;
}
