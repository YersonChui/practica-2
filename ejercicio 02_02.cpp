// Fecha creación: 27/08/2023
// Fecha modificación: 27/08/2023
// Número de ejericio: 1
// Problema planteado:Almacenar un vector de tamaño N, con números al azar entre A y B, e imprima la suma de los componentes de índice par y la resta de los componentes de índice impar
#include <iostream>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10}; // Arreglo constante de 10 elementos
    float parpo=0,impnega = 0,positivos,negativos;
    for (int i=0;i<10;i++){
        if (numeros[i]%2 ==0&&numeros[i]>0){
            parpo++;
        }
        if (numeros[i]%2 !=0&&numeros[i]<0){
            impnega++;
        }
    }
    positivos = (parpo /10)*100;
    negativos = (impnega /10)*100;
    cout << "El porcentaje de numeros pares positivos es: " << positivos << "%" << endl;
    cout << "El porcentaje de numeros impares negativos es: " <<negativos << "%" << endl;
    return 0;
}
