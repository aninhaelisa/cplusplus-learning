#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    cout << "Jogo de advinhar" << endl;

    srand(time(0));
    int random = rand() % 10 + 1;
    int n;
    int tentativa = 0;

    cout << "Digite um numero entre 1 e 10: ";
    cin >> n;

    while (n != random) {
        cout << "NUMERO ERRADO! TENTE NOVAMENTE " << endl;
        if (n < random){
            cout << "O numero digitado e menor que o numero secreto" << endl;
        }
        else if (n > random){
            cout << "O numero digitado e maior que o numero secreto" << endl;
           
        }
        cout << "Digite um numero entre 1 e 10: ";
        cin >> n;
        tentativa += 1;

    }
    cout << "Parabens! Voce acertou o numero secreto!" << endl;
    cout << "Voce acertou o numero secreto em " << tentativa << " tentativas!" << endl;
    
}