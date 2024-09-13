#include <iostream>
using namespace std;
int main(){
    int n,f, rest;
    cout << "-------CALCULADORA DE FATORIAL-------" << endl;
    cout << "Digite o numero que deseja fatorar: " << endl;
    cin >> n;

    rest = (n-1);
    if (rest < 1){
        cout << "Numero invalido";
        return 1;
    }

    for (n > 1; f <= rest;){
        f *= n--;
        cout << f << endl;
    }

}