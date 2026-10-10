#include <iostream>
using namespace std;
int main(){
    cout << "Somar 5 numeros:  " << endl;
    int n;
    int soma = 0;
    for(int i = 0; i < 5; i++){
        cout << "DIGITE O " << i+1 << " NUMERO: ";
        cin >> n;
        soma += n;
    }

    cout << "SOMA: " << soma;
}