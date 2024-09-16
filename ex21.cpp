#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int n, valor;

    cout << "Digite a quantidade de numeros que serao fatorados: "; 
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor: ";
        cin >> valor;

        
        int aux, prod = 1;
        for (aux = 1; aux <= valor; aux++) {
            prod *= aux;
        }

        
        cout << "VALOR ---------------------- FATORIAL\n" << valor << "! ------------------------ = " << prod << endl;
    }

    return 0;
}
