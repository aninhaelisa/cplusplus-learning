#include <iostream>
using namespace std;
int main(){
    cout << endl << "ESTRUTURA DE REPETICAO" << endl;
    cout << endl << "ADVINHE O NUMERO! " << endl;
    int n;
    cout << "Digite um numero (0-10): ";
    cin >> n;
    while(n != 5){
        cout << "voce errou, tente novamente: " << endl;
        cout << "Digite um numero (0-10): ";
        cin >> n;

        if(n == 5){
            cout << "Parabens, voce acertou!" << endl;
            break;
        }
    }
    return 0;
}

