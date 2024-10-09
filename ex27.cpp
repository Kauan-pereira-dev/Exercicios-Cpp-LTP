#include <iostream>
using namespace std;
int main(){
    int vetor[8];
    cout << "\tExercicio 4 - Vetores!" << endl;
    cout << "--------------------------------------------" << endl;

    for (int c = 0; c < 8; c++){
        cout << "Insira o numero: ";
        cin >> vetor[c];
    }

    for (int i = 0; i < 7; i++){
        for (int j = i+1; j < 8; j++){
            if (vetor[i] > vetor[j]){
                int troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }

    for (int i = 0; i < 8; i++){
        cout << vetor[i] << " ";
    }

    cout << "\nFIM DO PROGRAMA - Exercicio 4 Resolvido";
}