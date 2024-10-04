#include <iostream>
using namespace std;
int main(){

    //Variaveis:
    int termo1, termo2, termo3, multi, resultado;
   

    cout << "--------------------------------------------------\n"<< "\t\tEXERCICIO 23\n" << "\tSEQUENCIA \tNUMERICA\n" << "--------------------------------------------------\n";
    int n;

    //Valor dos termos:
    termo1 = 2;
    termo2 = 7;
    termo3 = 3;

    
    //Valor do multiplicador:
    multi = 2;

    //Solicitacao do n de termos:
    cout << "Digite a quantidade de termos que deseja: ";
    cin >> n;

    //Se n = zero:
    if (n == 0){
            cout << "Valor zero (0) e invalido, tente novamente.";
    }

    else if (n == 1){
            resultado = termo1;
            cout << termo1;
    
    }
    else if (n == 2){
            resultado = termo2;
            cout << termo1 << " - " << resultado;
        
    }
    else if (n == 3){
            resultado = termo3;
            cout << termo1 << " - " << termo2 << " - " << resultado;     
    }

    else {
            
        cout << termo1 << " - " << termo2 << " - " << termo3 << " - ";
        
        
        
            //Inicio do loop for:
            for (int i = 4; i <= n; i++){
                
                resultado = termo1 * multi;
                
                cout << resultado << " - ";
                multi++;

                
                
                termo1 = termo2;
                termo2 = termo3;
                termo3 = resultado;
                
                
                
            }

            
            
        }
        

            return 0; 

            
        
        
}




    

