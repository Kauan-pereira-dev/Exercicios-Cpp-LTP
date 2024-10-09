#include <iostream>
using namespace std;

int main(){
    int v1[10]={3, 5, 4, 2, 2, 5, 3, 2, 5, 9};
    int v2[10]={7, 15, 20, 0, 18, 4, 55, 23, 8, 6};

    for (int cont = 0; cont < 10; cont++){
        cout << v1[cont] << " " << v2[cont] << " ";
    }
    cout << "\nFim do programa.";
    return 0;
}