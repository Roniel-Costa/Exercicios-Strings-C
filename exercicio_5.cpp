#include <iostream>
#include <string>

using namespace std;

int main (){
    string numero;
    int quantidade;
   
    quantidade = 0;
   
   
    cout << "Digite uma sequencia de numeros: " << endl;
    getline(cin, numero);
   
    for (int i = 0; i < numero.size(); i++)
        if (numero[i] == '1') {
            quantidade = quantidade + 1;
        }
   
    cout << "A quantidade de 1 nos caracteres escritos são: " << quantidade << endl;
       
    return 0;
}