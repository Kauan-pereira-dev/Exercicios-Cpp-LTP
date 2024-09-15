#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int n, valor;

    cout << "Digite a quantidade de números que serão fatorados: "; 
    cin >> n;

    // Loop para processar cada valor inserido
    for (int i = 0; i < n; i++) {
        cout << "Digite o valor: ";
        cin >> valor;

        // Calculando o fatorial
        int aux, prod = 1;
        for (aux = 1; aux <= valor; aux++) {
            prod *= aux;
        }

        // Exibindo o resultado
        cout << "VALOR ---------------------- FATORIAL\n" << valor << " ! ------------------------ = " << prod << endl;
    }

    return 0;
}
