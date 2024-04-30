#include <iostream>
using namespace std;

//operador condicional ternário


int main()
{
setlocale(LC_ALL, "portuguese");
// sintaxe
// expressão ? valor se for verdadeiro : valor se for falso;

5 > 2 ? cout << "sim" << endl: cout << "não" << endl;
5 < 2 ? cout << "sim" << endl: cout << "não" << endl;

// 1 = true
// 0 = false

bool valor = false;
50 > 40 ? valor = true: valor = false;

cout << valor << endl;

system("pause");
return 0;
}
