#include <iostream>
using namespace std;
int main()
{
    cout << endl
         << "ESTRUTURA CONDICIONAL SIMPLES" << endl;
    int n1;
    cout << "Digite um numero: ";
    cin >> n1;
    if (n1 > 0)
    {
        cout << "O numero e positivo" << endl;
    }
    else if (n1 < 0)
    {
        cout << "O numero e negativo" << endl;
    }
    if (n1 % 2 == 0)
    {
        cout << "O numero e par" << endl;
    }
    else if (n1 % 2 != 0)
    {
        cout << "O numero e impar" << endl;
    }

    if (n1 == 0)
    {
        cout << "O numero e zero" << endl;
    }

    return 0;
}

