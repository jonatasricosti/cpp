#include <iostream>
using namespace std;

//operador condicional tern�rio


int main()
{
setlocale(LC_ALL, "portuguese");
// sintaxe
// express�o ? valor se for verdadeiro : valor se for falso;

5 > 2 ? cout << "sim" << endl: cout << "n�o" << endl;
5 < 2 ? cout << "sim" << endl: cout << "n�o" << endl;

// 1 = true
// 0 = false

bool valor = false;
50 > 40 ? valor = true: valor = false;

cout << valor << endl;

system("pause");
return 0;
}
