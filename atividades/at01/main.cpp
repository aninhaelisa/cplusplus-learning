#include <iostream>
using namespace std;

int main(){
    cout  << "SEU PRIMEIRO NOME:  ";
    string nome;
    cin >> nome;
    cout << "seja bem vindo " << nome << "! " << endl;

    cout << "SEU PRIMEIRO SOBRENOME:  ";
    string sobrenome;
    cin >> sobrenome;
    cout << "seja bem vindo " << nome << " " << sobrenome << "! " << endl;

    cin.ignore(1000, '\n');

    cout << "NOME COMPLETO: ";
    string nmCompleto;
    getline(cin, nmCompleto);
    cout << "seja bem vindo " << nmCompleto << "! " << endl;

    return 0;
}