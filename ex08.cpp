#include <iostream>
using namespace std;
int main(){
    float r;
    cout << "CALCULO-AREA-DE-CIRCULOS!\n";
    cout << "Digite o valor do raio do circulo: \n";
    cin >> r;
    r = r*r;
    cout << "Com o valor informado, a area do cirulo resulta em: " << r * 3.14;
    return 0;
}