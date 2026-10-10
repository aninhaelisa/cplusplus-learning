#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Que horas sao?: " << endl;
    cout << "1 - entre 00:00 e 05:00" << endl;
    cout << "2 - entre 06:00 e 11:00" << endl;
    cout << "3 - entre 12:00 e 18:00" << endl;
    cout << "4 - entre 19:00 e 23:00" << endl;
    cin >> n;
    switch(n){
        case 1:
            cout << "Tenha uma boa madrugada!" << endl;
            break;
        case 2:
            cout << "Tenha um bom dia!" << endl;
            break;
        case 3:
            cout << "Tenha uma boa tarde!" << endl;
            break;
        case 4:
            cout << "Tenha uma boa noite!" << endl;
            break;
        default:
            cout << "Opcao invalida!" << endl;
            break;
    }
}