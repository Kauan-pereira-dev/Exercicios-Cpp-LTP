#include <iostream>
using namespace std;
int main(){
    int cod;
    double salario, NSal;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=PERCENTUAL DE AUMENTO-=-=-=-=-=-=-=-=-=-=-=-=\n";
    cout << "Digite o seu codigo:\n";
    cin >> cod;
    cout << "Digite o seu salario:\n";
    cin >> salario;
    if (cod == 1){
        NSal = (salario*0.5)+salario;
        cout << "O seu cargo e: ESCRITURARIO.\nO aumento salarial e de 50%.\n Seu novo salario sera: R$" << NSal; 
    }
    else if (cod == 2){
        NSal = (salario*0.35)+salario;
        cout << "O seu cargo e: SECRETARIO(A).\nO aumento salarial e de 35%.\n Seu novo salario sera: R$" << NSal; 
    }
    else if (cod == 3){
        NSal = (salario*0.2)+salario;
        cout << "O seu cargo e: CAIXA.\nO aumento salarial e de 20%.\n Seu novo salario sera: R$" << NSal; 
    }
    else if (cod == 4){
        NSal = (salario*0.1)+salario;
        cout << "O seu cargo e: GERENTE.\nO aumento salarial e de 10%.\n Seu novo salario sera: R$" << NSal; 
    }
    else if (cod == 5){
        NSal = (salario);
        cout << "O seu caro e: DIRETOR\nNao houve aumento no seu salario.";
    }
    else {
        cout << "O codigo digitado e invalido, redigite";
    }
    }   
