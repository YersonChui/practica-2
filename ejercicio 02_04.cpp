// Fecha creación: 27/08/2023
// Fecha modificación: 27/08/2023
// Número de ejericio: 4
// Problema planteado: Un arreglo contiene las edades de un grupo de 50 personas con números al azar, determine: el porcentaje de mayores (>=18 años) y menores de edad (<18 años).
//Las edades al azar deben ser generadas a partir de 1 a 110 años.
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int edades[50];
    int may=0,men = 0;
    srand(time(NULL));
    for (int i=0; i<50; i++) {
            edades[i] = 1+rand()%110; //números aleatorio 1, 110
            cout << "edades[" << i << "] = " << edades[i] << endl;
            if (edades[i] >= 18){
                may++;
            }else men++;
  }
  double pormayores,pormenores;
  pormayores = (may*100.0) / 50;
  pormenores = (men*100.0) / 50;
  cout << "El porcentaje mayores de edad es " << pormayores << "%." << endl;
  cout << "El porcentaje menores de edad es " << pormenores << "%." << endl;
  return 0;
}
