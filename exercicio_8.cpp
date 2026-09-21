#include <iostream>
#include <string>

using namespace std;

int main (){
    string nome;
   
    cout << "Qual o seu nome: " << endl;
    getline(cin, nome);
   
    cout << "A ordem inversa do seu nome é: " << endl;
   
    for(int i = nome.size() - 1; i >= 0; i--){
        cout << nome[i] << endl;
    }

    return 0;
}