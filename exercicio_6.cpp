#include <iostream>
#include <string>

using namespace std;

int main (){
    string caracteres, escolha, troca;
   
    cout << "Digite uma sequencia de caracteres: " << endl;
    getline(cin, caracteres);
   
    cout << "Qual letra quer trocar? " << endl;
    getline(cin, escolha);
   
    cout << "Por qual letra quer trocar?" << endl;
    getline(cin, troca);
   
        for(int i = 0; i < caracteres.size(); i++){
            if (caracteres[i] == escolha[0]){

            caracteres[i] = troca[0];

        }
    }
       
        cout << "O novo texto com o carcter subisituido: " << caracteres << endl;
   
    return 0;
}