#include <iostream> // pra usar o comando cout, cin
using namespace std; // com isso não precisa escrever std::

int main()
{
setlocale(LC_ALL, "portuguese");// serve pra usar caracteres brasileiros

// o cin é comando leia da linguagem c++
// o cin = character ou console input serve pra ler dados


cout << "digite um número: ";
int valor;
cin >> valor; // coloque o valor nessa variável
cout << "você digitou o número: " << valor << endl;


system("pause");
return 0;
}
