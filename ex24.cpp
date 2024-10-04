#include <iostream>
using namespace std;

int main(){
    double e, n, resultado, fmostrar ,f = 1.0;

    cout << "Digite o numero: ";
    cin >> n;

   
    cout << "E = 1 + 1/";
    for (int i = 1; i <= n; i++)
    {
        
        f *= n;
        
        e = 1.0;
        resultado = e + (1/f);
        cout <<resultado << " + ";
    
    }
}