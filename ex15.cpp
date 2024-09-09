#include <iostream>
using namespace std;
int main(){
    double sal, nsal;
    int cod;
    string cargo;

    cout << "AUMENTO DE SALARIO DOS COLABORADORES DA EMPRESA XKY";
    cout << "Digite seu salario: R$";
    cin >> sal;
    cout << "Digite o seu codigo: ";
    cin >> cod;

    if (cod == 1){
        cargo = "PORTEIRO";
        nsal = (sal*0.12)+sal;
    }
    else if (cod == 2){
        cargo = "AUXILIAR";
        nsal = (sal*0.07)+sal;
    }
    else if (cod == 3){
        cargo = "PROFESSOR";
        nsal = (sal*0.2)+sal;
    }
    else if (cod == 4){
        cargo = "COORDENADOR";
        nsal = (sal*0.1)+sal;
    }
    else if (cod == 5){
        cargo = "DIRETOR";
        nsal = (sal*0.38)+sal;
    }
    else{
        cout << "O codigo digitado e invalido, redigite.";
    }

    cout << "CARGO: " << cargo << "\nANTIGO SALARIO: R$" << sal << "\nNOVO SALARIO: R$" << nsal;
}