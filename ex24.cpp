#include <iostream>
using namespace std;

int main(){
    int contadores[2];
    double resultados[3];

    cout << "Digite a quantia de numeros que deseja: ";
    cin >> resultados[0];

    for (contadores[0] = 1; contadores[0] <= resultados[0]; contadores[0]++){
        cout << "\nDigite o numero: ";
        cin >> resultados[1];
        resultados[2] = 1;
        for (contadores[1] = 1; contadores[1] <= resultados[1]; contadores[1]++){
            resultados[2] *= resultados[1];
        }
        cout << "O resultado e: " << resultados[2] << endl;
        cout << "------------------------------------------------" << endl;
    }
}