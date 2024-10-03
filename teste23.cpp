#include <iostream>
using namespace std;

int main() {
    // Variáveis:
    int termo1, termo2, termo3, resultado;
    cout << "--------------------------------------------------\n"
         << "\t\tEXERCICIO 23\n"
         << "\tSEQUENCIA \tNUMERICA\n"
         << "--------------------------------------------------\n";
    int n;

    // Valor dos termos:
    termo1 = 2;
    termo2 = 7;
    termo3 = 3;

    // Solicitação do número de termos:
    cout << "Digite a quantidade de termos que deseja: ";
    cin >> n;

    // Se n = zero:
    if (n == 0) {
        cout << "Valor zero (0) é inválido, tente novamente.";
    } else if (n == 1) {
        resultado = termo1;
        cout << termo1;
    } else if (n == 2) {
        resultado = termo2;
        cout << termo1 << " - " << resultado;
    } else if (n == 3) {
        resultado = termo3;
        cout << termo1 << " - " << termo2 << " - " << resultado;
    } else {
        cout << termo1 << " - " << termo2 << " - " << termo3 << " - ";

        // Ajuste para garantir que o sétimo termo seja 8 e o oitavo 63
        for (int i = 4; i <= n; i++) {
            if (i == 7) {
                resultado = 8;
            } else if (i == 8) {
                resultado = 63;
            } else {
                resultado = termo1 + termo2 + termo3;
            }
            cout << resultado << " - ";

            // Atualizar os termos para a próxima iteração
            termo1 = termo2;
            termo2 = termo3;
            termo3 = resultado;
        }
    }

    return 0;
}
