#include <iostream>
using namespace std;
int main(){
    int idade;
    cout << "Sua idade e: ";
    cin >> idade;
    cout <<"a idade e: " << idade;

    cout << endl << "SOMA DE DOIS NUMEROS" << endl;

    int n1, n2, soma1;
    cout << "Primeito numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    soma1 = n1 + n2;
    cout << "A soma e: " << soma1;

    cout << endl << "MEDIA DE 5 NUMEROS" << endl;
    int num1, num2, num3, num4, num5;
    int media, soma2;
    cout << "Digite 5 numeros (separados por espaco): ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    soma2 = num1 + num2 + num3 + num4 + num5;
    media = soma2 / 5;
    cout << "A media e: " << media;
}