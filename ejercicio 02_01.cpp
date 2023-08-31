// Fecha creaci�n: 31/08/2023
// Fecha modificaci�n: 31/08/2023
// N�mero de ejericio: 1
// Problema planteado:Almacenar un vector de tama�o N, con n�meros al azar entre A y B, e imprima la suma de los componentes de �ndice par y la resta de los componentes de �ndice impar
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    int N = 10,A = 1,B = 100;
    vector<int>numeros(N);
    srand(time(NULL)); // num random
    for (int i = 0; i < N; i++)
    {
        numeros[i] = rand() % (B - A + 1) + A;
        cout << numeros[i] << " ";
    }
    cout << endl;

    int suma_pares = 0;
    int resta_impares = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            suma_pares += numeros[i];
        }
        else
        {
            resta_impares -= numeros[i];
        }
    }
    cout << "La suma de los componentes de �ndice par es: " << suma_pares << endl;
    cout << "La resta de los componentes de �ndice impar es: " << resta_impares << endl;

    return 0;
}

