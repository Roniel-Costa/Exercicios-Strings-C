#include <iostream>
#include <string>

using namespace std;

int main (){
    string palavra, troca;
   
    cout << "Escreva uma palavra: " << endl;
    getline(cin, palavra);
   
    cout << "Você quer trocar as vogais por qual letra? " << endl;
    getline(cin, troca);
   
   
    cout << "A palavra sem as vogais é: " << endl;
   
    for(int i = 0; i < palavra.size(); i++){
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            palavra[i] = troca[0];
        }
       
        cout << palavra[i];
    }
   
    return 0;
    
}