#include <iostream>
#include <string>

using namespace std;

int main (){
    string sexo;
    int idade;
   
    cout << "Qual a sua idade? " << endl;
    cin >> idade;
    cin.ignore();
   
    cout << "Qual o seu sexo ? (masculino ou feminino)" << endl;
    getline(cin, sexo);
   
    if (idade < 25 && sexo == "feminino") {
        cout << "ACEITO !!! " << endl;
       
    }
   
    else {
        cout << "NAO ACEITA" << endl;
    }

    return 0;
}