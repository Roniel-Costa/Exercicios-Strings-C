#include <iostream>
#include <string>

using namespace std;

int main (){
    int tamanho = 0;
    string nome_completo;
   
    cout << "Escreva o seu nome completo!!! " << endl;
    getline(cin, nome_completo);
   
    while (nome_completo[tamanho] != '\0') {
        tamanho = tamanho + 1;
    }
   
    cout << tamanho << endl;
   
    return 0;
}