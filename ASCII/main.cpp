#include <iostream>
#include <stdlib.h>
using namespace std;


// use essa fun��o pra imprimir a localiza��o
// dos n�meros na tabela ASCII
void ASCII_numbers()
{
    cout << "decimal | char" << endl;
    for(int i = 48; i <= 57; i++)
    {
        cout << i << "    =    " << char(i) << endl;
    }
}

// use essa fun��o pra imprimir o alfabeto
// na tabela ASCII em min�sculo e mai�sculo
void ASCII_alphabet()
{
    cout << "Mai�sculo" << endl;
    for(int i = 65; i <= 90; i++)
    {
        cout << char(i) << " ";
    }

    cout << "\n\n";

    cout << "Min�sculo" << endl;
    for(int i = 97; i <= 122; i++)
    {
        cout << char(i) << " ";
    }

    cout << "\n\n";
}

void ASCII_Code()
{
    system("cls");
    cout << "digite o caractere: ";
    char c;
    cin >> c;
    cout << "O valor ASCII de " << c << " � " << int(c) << endl;

    cout << "quer continuar ?" << endl;
    cout << "[1] sim" << endl;
    cout << "[2] n�o" << endl;
    int option;
    cin >> option;
    switch(option)
    {
        case 1: ASCII_Code(); break;
        case 2: return; break;
    }
}

int main()
{
setlocale(LC_ALL, "portuguese");

ASCII_alphabet();
ASCII_numbers();
system("pause");
ASCII_Code();
system("pause");

return 0;
}

