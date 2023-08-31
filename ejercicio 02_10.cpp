// Fecha creaci�n: 28/08/2023
// Fecha modificaci�n: 28/08/2023
// N�mero de ejericio: 10
// Problema planteado: - Dado un arreglo que contiene la poblaci�n de los nueve departamentos del pa�s y otro que contiene los nombres de estos departamentos, indique el nombre del departamento que tiene
//la mayor poblaci�n y el nombre del departamento que tiene la menor poblaci�n.
#include <iostream>
using namespace std;

int main() {
    int poblacion[] = {3051947, 2117112, 3425399, 553088, 916087, 601214, 661119, 516338, 163727};
    string nombres[] = {"La Paz", "Cochabamba", "Santa Cruz", "Oruro", "Potos�", "Tarija", "Chuquisaca", "Beni", "Pando"};
    int mayor = poblacion[0];
    int menor = poblacion[0];
    int indice_mayor = 0, indice_menor = 0;
    for (int i = 1; i < 9; i++){
            if (poblacion[i] > mayor){
                mayor = poblacion[i];
                indice_mayor = i;
            }
    if (poblacion[i] < menor){// Si el elemento actual es menor que el menor valor guardado
            menor = poblacion[i];
            indice_menor = i;
    }
    }
  cout<<"El departamento con la mayor poblaci�n es "<<nombres[indice_mayor]<<" con "<< mayor<<" millones de habitantes."<<endl;
  cout<<"El departamento con la menor poblaci�n es "<<nombres[indice_menor]<<" con "<< menor<<" millones de habitantes."<<endl;
  return 0;
}
