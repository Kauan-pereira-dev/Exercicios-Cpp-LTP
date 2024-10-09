#include <iostream>
using namespace std;
int main(){
    int v[6]; //vetor dos valores
    int somaP = 0, qtdeImpar = 0;

    cout << "\tExercicio 5 - Vetores!" << endl;
    cout << "----------------------------------------" << endl;

    for (int K = 0; K < 6; K++){
        cout << "Insira o numero: ";
        cin >> v[K];
    }

    cout << "----------------------------------------" << endl;
    cout << "Relatorio: " << endl;
    //verificação do numero par e a primeira mensagem:
    cout << "Os numeros pares sao: " << endl;
    for (int i = 0; i < 6; ++i){
      
        if (v[i] % 2 == 0){
            cout << "numero " << v[i] << " na posicao: " << i+1 << endl;
            somaP += v[i]; //soma dos números pares.
        }
    }
    
    
    //exibição da segunda mensagem e soma dos números pares:
    cout << "A soma dos pares e: " << somaP << endl;

    cout << "---------------------------------------" << endl;
    cout << "Os numeros impares sao: " << endl;

    //verificação do numero impar e a terceira mensagem:
    for (int i = 0; i < 6; ++i){
        if (v[i] % 2 != 0){
            cout << "numero  " << v[i] << " na posicao: " << i+1 << endl;
            qtdeImpar++;
        }
    }

    //exibição da quarta e última mensagem:
    cout << "A quantidade de impares e: " << qtdeImpar << endl;
    cout << "FIM DO PROGAMA - EXERCICIO 5 RESOLVIDO";
    
    return 0;
}