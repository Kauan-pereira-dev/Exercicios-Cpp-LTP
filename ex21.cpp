#include <iostream>
using namespace std;
int main(){
    int n,f, rest;
    cout << "-------CALCULADORA DE FATORIAL-------";
    cout << "Digite o numero que deseja fatorar: ";
    cin >> n;

    for (rest = 0; n > 1; n++){
        f = n*(n-1);
        cout << f << endl;
    }

}