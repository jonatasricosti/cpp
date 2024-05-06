#include <iostream>
using namespace std;

// typedef define um novo tipo
typedef int inteiro; // agora podemos escrever inteiro invés de int

int main()
{
setlocale(LC_ALL, "portuguese"); // serve pra usar caracteres brasileiros 

inteiro idade = 20;

cout << "tenho " << idade << " ano de idade" << endl; 

system("pause");
return 0;
}
