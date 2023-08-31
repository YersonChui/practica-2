// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Número de ejericio: 7
// Problema planteado:A partir de dos vectores constantes que contienen nombres de 7 personas cada uno. Escribir un programa que escriba la palabra “Iguales” si ambos vectores son iguales y “Diferentes” si no lo son. Serán iguales cuando en la misma posición de ambos vectores se
//tenga el mismo valor para todos los elementos.
#include <iostream>
#include <string>
using namespace std;
    string nombres1[7] = {"Toti", "denny", "Juan", "Diego", "Isa", "Lucas", "Luisa"};
    string nombres2[7] = {"Toti", "denny", "Juan", "Diego", "Isa", "Lucas", "Luisa"};
    int comparar_vectores(string v1[],string v2[], int tam){
        for (int i = 0; i < tam; i++) {// Si algún elemento es diferente, devolver 1
                if (v1[i] != v2[i]) {
                    return 1;
                }
        }
        return 0;
}
int main(){
    int resultado = comparar_vectores(nombres1, nombres2, 7);
    if (resultado == 0){
        cout << "Iguales" << endl;
    }else{
        cout << "Diferentes" << endl;
        }
return 0;
}
