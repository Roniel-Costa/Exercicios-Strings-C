#include <iostream>
#include <string>

using namespace std;

int main (){
    string nome;
   
    cout << "Qual o seu nome: " << endl;
    getline(cin, nome);
   
    cout << "O seu nome sem as vogais é: " << endl;
   
    for (int i = 0; i < nome.size(); i++){
        if (nome[i] != 'a'&& nome[i] != 'e' && nome[i] != 'i' && nome[i] != 'o' && nome[i] != 'u'){
           
        cout << nome[i];
       
        }
   
    }
    return 0;
}