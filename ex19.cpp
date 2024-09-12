#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    cout << "Tabuada do " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }

    return 0;
}
