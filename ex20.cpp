#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*Anotações:
    ano de contratação = 1995;
    salario inicial = 1000.00;
    aumento1996 = 0.015;
    
    ano atual = ano que o user digitar;
    ler o ano; (ps precisa ser maior que ano de contratação (1995));

    salario = salario inicial;
    aumentoPerce = 0.0;
    aumentoAnoAnt = aumento1996;
    
    */

   int anoContrato = 1995;
   double salarioIn = 1000.00;
   double a1996 = 0.015;

    //Solicitação do ano que estamos:
   int aAtualmente;
   cout << "Digite o ano em que estamos: ";
   cin >> aAtualmente;

   //condição caso seja inferior à contratação:
   if (aAtualmente < anoContrato){
    cout << "Valor incorreto, o ano é menor que o ano de contratacao, redigite.";
    return 1;
   }

   double salario = salarioIn;
   //Declaração do aumento percentual (primeiro aumento na variavel a1996);
   double aumentoPercent = 0.0; //aumento depois de 1996;
   double aumentoAnterior = a1996; //o único aumento que teve até a declaração foi de 0.015, ano de 1996;

   //aumento para 1996;
   if (aAtualmente >= 1996){
    salario = salario+(salario*a1996);

   }

   //aumento para depois de 1996:
   for (int ano = 1997; ano <= aAtualmente; ++ano){
    aumentoPercent = 2 * aumentoAnterior;  //condição de que o aumento equivale ao dobro do ano anterior;
    salario += salario * aumentoPercent;
    aumentoAnterior = aumentoPercent;
   }

   //Para não aparecer um valor gigantesco no salario:
   cout << "O salario no ano de: " << aAtualmente << endl << "Sera de: R$" << fixed << setprecision(1) << salario;
/*  double num = 3.14159;
    std::cout << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;*/  
}