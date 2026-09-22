#include <iostream>
#include <string> 

using namespace std; 

int main (){ 
string nome; int quantidade;

quantidade = 0;

cout << "Qual o seu nome: " << endl;
getline(cin, nome);

for (int i = 0; i < nome.size(); i++){ 
     if (nome[i] == 'a'|| nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){ 
     quantidade = quantidade + 1; } 
 } 

 cout << "A quantidade de vogais no seu nome é " << quantidade << endl;

 return 0; 
}  