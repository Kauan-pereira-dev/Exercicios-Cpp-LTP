#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a, b, c;

    cout << "Enter a value:" << endl;
    cin >> a;
    cout << "Enter b value:" << endl;
    cin >> b;
    cout << "Enter c value:" << endl;
    cin >> c;

    vector<int> value = { a, b, c};
    cout << value[0] << endl;
    cout << value[1] << endl;;
    cout << value[2] << endl;;
}