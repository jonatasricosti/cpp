#include <iostream> // pra usar o comando cout

int main()
{
setlocale(LC_ALL, "portuguese");// serve pra usar caracteres brasileiros

// o cout � comando escreva da linguagem c++
// o cout = console out serve pra escrever na tela do terminal


std::cout << "ol�, mundo" << std::endl;

using namespace std; // com isso n�o precisa escrever std::

cout << "oi, mundo" << endl;


system("pause");
return 0;
}
