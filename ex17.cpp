#include <iostream>
using namespace std;
int main(){

    double x, y, z;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;
    cout << "Digite o valor de z: ";
    cin >> z;

    string tri, cla; 
    double a = y+z;
    double b = z+x;
    double c = x+y;

    if (x < a && y < b && z < c){
        tri = "Sim"; 
        if(x == y && z == y){
                cla = "Equilatero";
        }
        else if (y == z){
            cla = "Isoceles";
        }
        else if (z == x){
            cla = "Isoceles";
        }
        else if (x == y){
            cla = "Isoceles";
        }
        else if (x || y || z){
            cla = "Escaleno";
        }
        else {
        tri = "Nao";
        }

        cout << "E UM TRIANGULO: " << tri << "\nCLASSIFICACAO: " << cla;
    }
    else {
        cout << "Nao e um triangulo.";
    }
}
