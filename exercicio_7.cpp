#include <iostream>
#include <string>

using namespace std;

int main (){
    string nome;
   
    cout << "Qual o seu nome: " << endl;
    getline(cin, nome);
   
   
    if (nome[0] == 'A' || nome[0] == 'a'){
        cout << "Seu nome começa com A/a !!! então seu nome é " << nome << endl;
    }
   
    else {
       cout << "Seu nome não começa com A/a !!!" << endl;
   
    }
   
    return 0;
}