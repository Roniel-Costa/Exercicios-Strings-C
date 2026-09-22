#include <iostream>
#include <string>

using namespace std;

int main (){
    string palavra;
   
    cout << "Escreva uma palavra: " << endl;
    getline(cin, palavra);
   
   
    cout << "A palavra com as letras maiúsculas em minúsculas: " << endl;
   
    for (int i = 0; i < palavra.size(); i++){
       
        palavra[i] = tolower(palavra[i]);
       
        cout << palavra[i];
       
        }
   
    return 0;
}