#include <iostream>
using namespace std; // com isso n�o precisa escrever std::

int main()
{
setlocale(LC_ALL, "portuguese");// serve pra usar caracteres brasileiros

// a fun��o getline l� uma string de linha, ou seja, consegue l� um string com espa�o

string nome;
cout << "digite seu nome completo: ";
getline(cin, nome);

cout << "voc� digitou o nome: " << nome << endl;

// se ao inv�s de usar getline, us�ssemos cin, ele n�o ia conseguir ler a linha com espa�o

system("pause");
return 0;
}
