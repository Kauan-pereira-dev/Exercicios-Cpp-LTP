#include <iostream>
using namespace std;
int main(){
    int n,f;
    cout << "-------CALCULADORA DE FATORIAL-------";
    cout << "Digite o numero que deseja fatorar: ";
    cin >> n;

    for (f = 0; n > 1;){
        f = n*(n-1);
        cout << f << endl;
    }

}