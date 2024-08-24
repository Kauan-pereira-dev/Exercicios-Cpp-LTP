#include <iostream>
using namespace std;
int main(){
    float area, base, altura;
    cout << "PR-CALCULO-DE-AREA\n";
    cout << "Digite o valor da altura: \n";
    cin >> altura;
    cout << "Digite o valor da base: \n";
    cin >> base;
    area = base*altura/2;
    cout << "Com os valores informados, a area do triangulo resulta em: " << area;
    return 0;
}