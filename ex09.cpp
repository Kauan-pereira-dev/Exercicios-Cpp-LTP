#include <iostream>
using namespace std;
int main (){
    double g1, g2, r, d;
    std::cout << "Digite a quantia de racao presente no saco (em KG):\n";
    std::cin >> r;
    std::cout << "Digite a quantia de racao que o primeiro gato come: \n";
    std::cin >> g1;
    std::cout << "Digite a quantia de racao que o segundo gato come: \n";
    std::cin >> g2;
    d = g1 + g2;
    d = d * 5;
    r = r * 1000;
    std::cout << "A quantia de ração restante no saco, após cinco (5) dias  será de: " << ((r-d)/1000) << " KG.";
    return 0; 


}