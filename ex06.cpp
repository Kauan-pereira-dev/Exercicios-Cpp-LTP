#include <iostream>
using namespace std;
int main(){
    float sal, au, nsal;
    cout << "Digite o seu salario atual: ";
    cin >> sal;
    au = sal*25/100;
    nsal = sal + au;
    cout << "O seu salario com um aumento de 25% resulta em: " << nsal;
    return 0;
}