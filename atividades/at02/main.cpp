#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << "========================================" << endl;
        cout << "CALCULADORA" << endl;
        cout << "DIGITE 'S' PARA SAIR" << endl;
        char sair;
        cin >> sair;
        if (sair == 'S' || sair == 's')
        {
            break;
        } else {
            cout << "CONTINUANDO..." << endl;
        }

        cout << "========================================" << endl;

        int n1, n2;
        cout << "NUMERO 1: " << endl;
        cin >> n1;
        cout << "NUMERO 2: " << endl;
        cin >> n2;
        cout << "ESCOLHA A OPERACAO (+ - / *): " << endl;
        char op;
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "RESULTADO: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "RESULTADO: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "RESULTADO: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 == 0)
            {
                cout << "ERRO: DIVISAO POR ZERO" << endl;
            }
            else
            {
                cout << "RESULTADO: " << n1 / n2 << endl;
            }
            break;
        default:
            cout << "ERRO: OPERACAO INVALIDA" << endl;
            break;
        }
    }

    return 0;
}