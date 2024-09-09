#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3, maior;
    cout << "O MAIOR NUMERO";
    cout << "\nDigite o primeiro numero:";
    cin >> n1;
    cout << "\nDigite o segundo numero:";
    cin >> n2;
    cout << "\nDigite o terceiro numero:";
    cin >> n3;
    cout << "\nO maior numero dentre os digitados e:";
    if (n1 > n3){
        maior = n1;
        n1 = n3;
        n3 = maior;
    }
    if (n1 > n2){
        maior = n1;
        n1 = n2;
        n2 = maior;
    }
    if (n2 > n3){
        maior = n2;
        n2 = n3;
        n3 = maior;
    }
    if (n1 == n2){
        cout << "Numero 1 e 2 sao iguais.\n";
    }
    if (n1 == n3){
        cout << "Numero 1 e 3 sao iguais.\n";
    }
    if (n2 == n3){
        cout << "Numero 2 e 3 sao iguais.\n";
    }
    cout <<n3;
    
    return 0;



}