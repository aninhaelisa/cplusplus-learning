#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int n = -1;
    int tentativas = 0;
    string escolhaR;
    string escolhaN;
    while (n != 0) {
        cout << "JOGO: PEDRA - PAPEL - TESOURA" << endl;

        srand(time(0));
        int r = rand() % 3 + 1;

        switch (r){
        case 1:
            escolhaR = "PEDRA";
            break;
        case 2:
            escolhaR = "PAPEL";
            break;
        case 3:
            escolhaR = "TESOURA";
            break;
        default:
            break;
        }

        cout << " " << endl;
        cout << "ESCOLHA UM NUMERO: " << endl;
        cout << "1 - PEDRA | 2 - PAPEL | 3 - TESOURA | 0 - SAIR" << endl;
        cin >> n;

         switch (n){
        case 1:
            escolhaN = "PEDRA";
            break;
        case 2:
            escolhaN = "PAPEL";
            break;
        case 3:
            escolhaN = "TESOURA";
            break;
        default:
            break;
        }

        cout << " " << endl;
        cout << "COMPUTADOR   |   JOGADOR" << endl;
        cout << escolhaR << "   x   " << escolhaN << endl;
        if (n == r) {
            cout << "EMPATE!" << endl; 
        }
        else if ((n == 1 && r == 3) || (n == 2 && r == 1) || (n == 3 && r == 2)) {
            cout << "VOCE VENCEU!" << endl;
        }
        else if ((n == 1 && r == 2) || (n == 2 && r == 3) || (n == 3 && r == 1)) {
            cout << "VOCE PERDEU!" << endl;
        } else if (n == 0) {
            cout << "SAINDO DO JOGO..." << endl;
            break;
        }

        tentativas += 1;
    }
    cout << "JOGADAS: " << tentativas << endl;
    cout << "OBRIGADO POR JOGAR!" << endl;
}