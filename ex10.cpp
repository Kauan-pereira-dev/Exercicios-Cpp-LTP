#include <iostream>
using namespace std;
int main(){
    double pe, pol, jar, mil;
    std::cout << "Digite o valor em pes: \n";
    std::cin >> pe;
    pol = 1;
    jar = pe/3;
    mil = jar/1760;
    std::cout << "O valor de: \n" << pe << "\nA) Polegadas: " << pe * 12 * pol << "\nB) Jardas: " << jar << "\nC) Milhas: " << mil;
    // 12*pe = polegada
}