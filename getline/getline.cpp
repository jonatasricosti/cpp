#include <iostream>
using namespace std; // com isso não precisa escrever std::

int main()
{
setlocale(LC_ALL, "portuguese");// serve pra usar caracteres brasileiros

// a função getline lê uma string de linha, ou seja, consegue lê um string com espaço

string nome;
cout << "digite seu nome completo: ";
getline(cin, nome);

cout << "você digitou o nome: " << nome << endl;

// se ao invés de usar getline, usássemos cin, ele não ia conseguir ler a linha com espaço

system("pause");
return 0;
}
