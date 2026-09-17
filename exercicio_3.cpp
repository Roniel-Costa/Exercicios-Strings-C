#include <iostream>
#include <string>

using namespace std;

int main (){
    string nome1, nome2;
    int teste;
   
    std::cout << "Qual o seu nome?" << std::endl;
    getline(cin, nome1);
   
    cout << "Qual o seu nome?" << endl;
    getline (cin, nome2);
   
    if (nome1 == nome2){
        cout << "os dois nomes são iguais" << endl;
    }
   
    else {
        cout << "Os nomes são diferentes" << endl;
    }
   
    return 0;
}
