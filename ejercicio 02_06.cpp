#include <iostream>
using namespace std;

int main() {
    int N = 5;
    int arreglo1[N] = {1, 2, 3, 4, 5};
    int arreglo2[N] = {6, 7, 8, 9, 10};
    int arreglo3[2*N];//tercer arreglo intercalados
    for (int i=0; i<N; i++){
        arreglo3[2*i] = arreglo1[i];  //posici�n par viene del primer arreglo
        arreglo3[2*i+1] = arreglo2[i];
    }
    cout << "El tercer vector es: " << endl;
    for (int i=0; i<2*N; i++) {
            cout << arreglo3[i] << " ";
    }
    cout << endl;
    return 0;
}
