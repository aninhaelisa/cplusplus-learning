
#include <iostream>
using namespace std;

int main()
{
    cout << endl
         << "ESTRUTURA DE REPETICAO COM TESTE NO FIM" << endl;
    cout << "DIGITE ZERO PARA SAIR" << endl;

    int n;

    do
    {
        cout << "numero: ";
        cin >> n;

        if (n > 0)
        {
            cout << "numero digitado e: " << n;
            cout << " e ele e positivo" << endl;
        }
        else if (n < 0)
        {
            cout << "numero digitado e: " << n;
            cout << " e ele e negativo" << endl;
        }

    } while (n != 0);

    cout << "FIM";
}



