#include <iostream>
using namespace std;
int main(){
    int v[10];
    cout << "\tExercicio 3 - Vetores!" << endl;
    cout << "------------------------------------------" << endl;
    for (int i = 0; i < 10; i++){
        cout << "Digite o numero: ";
        cin >> v[i];
    }

    for (int i = 0; i < 9; i++){
        for (int cont = i + 1; cont < 10; cont++){
            if (v[i] < v[cont]){
                int n = v[i];
                v[i] = v[cont];
                v[cont] = n;
            }
        }
    }

    cout << "Valor em ordem decrescente: " << endl;
    for (int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}