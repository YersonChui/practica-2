// Fecha creación: 28/08/2023
// Fecha modificación: 28/08/2023
// Número de ejericio: 9
// Problema planteado: - Un arreglo contiene las calificaciones de un examen dado por un grupo de estudiantes, otroarreglo contiene los nombres de los mismos y un tercer arreglo contiene la sigla de la carrera.
//Escribir un programa que permita obtener el nombre del alumno que obtuvo la mayor y elnombre del alumno que obtuvo la nota menor, además mostrar que carrera tuvo undesempeño mayor con relación al promedio del curso.

#include <iostream>
#include <string>
using namespace std;
int N = 10; // Número de estudiantes
double calificaciones[N]={8.5, 9.0, 7.2, 6.8, 10.0, 8.3, 5.4, 9.5, 7.7, 6.0};
string nombres[N] = {"Ana", "Carlos", "Elena", "Fernando", "Isabel", "Juan", "Luisa", "Miguel", "Nora", "Oscar"};
string carreras[N] = {"ADM", "ING", "PSI", "IND", "ING", "ADM", "PSI", "IND", "ING", "PSI"};
int indice_mayor(double arr[], int tam) {
    int mayor = 0;
    for (int i = 1; i < tam; i++) {
            if (arr[i] > arr[mayor]){
                mayor = i;
            }
    }return mayor; // Devolver el índice del mayor elemento
}
int indice_menOr(double arr[], int tam) {
    int menor = 0;
    for (int i = 1; i < tam; i++) {
            if (arr[i] < arr[menor]) { // Si el elemento actual es menor que el menor hasta ahora
                menor = i;
            }
    }return menor;
}
double suma(double arr[], int tam) {
    double s = 0; // Inicializar la suma con cero
    for (int i = 0; i < tam; i++) {
            s += arr[i];
    }return s;
}
double promedio(double arr[], int tam) {
    return suma(arr, tam) / tam; // Devolver la suma dividida entre el tamaño
}
string carrera_mayor_promedio(double calif[], string carr[], int tam) {
    double prom_adm = 0,prom_ing = 0,prom_psi = 0,prom_med = 0;
    int cont_adm = 0,cont_ing = 0,cont_psi = 0,cont_med = 0;
    for (int i = 0; i < tam; i++) {
            if (carr[i] == "ADM") {
                prom_adm += calif[i];
                cont_adm++;
            }
    else if (carr[i] == "ING") { // Si la carrera es ingeniería
            prom_ing += calif[i]; // Sumar la calificación al promedio de ingeniería
            cont_ing++; // Incrementar el contador de ingeniería
    }
    else if (carr[i] == "PSI") {
            prom_psi += calif[i];
            cont_psi++;
    }
    else if (carr[i] == "MED") {
            prom_med += calif[i];
            cont_med++;
    }
    }
    prom_adm /= cont_adm;
    prom_ing /= cont_ing;
    prom_psi /= cont_psi;
    prom_med /= cont_med;
    if (prom_adm > prom_ing && prom_adm > prom_psi && prom_adm > prom_med) {
            return "ADM";
    }
    else if (prom_ing > prom_adm && prom_ing > prom_psi && prom_ing > prom_med) {
            return "ING";
    }
    else if (prom_psi > prom_adm && prom_psi > prom_ing && prom_psi > prom_med) {
            return "PSI";
    }
    else if (prom_med > prom_adm && prom_med > prom_ing && prom_med > prom_psi) {
            return "MED";
    }
}

int main() {
    int mayor = indice_mayor(calificaciones, N);
    int menor = indice_menor(calificaciones, N);
    double prom = promedio(calificaciones, N);
    string carrera = carrera_mayor_promedio(calificaciones, carreras, N);
    cout << "El nombre del alumno que obtuvo la mayor calificación es: " << nombres[mayor] << endl;
    cout << "El nombre del alumno que obtuvo la menor calificación es: " << nombres[menor] << endl;
    cout << "El promedio del curso es: " << prom << endl;
    cout << "La carrera que tuvo un desempeño mayor con relación al promedio del curso es: " << carrera << endl;

return 0;
}
