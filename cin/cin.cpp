#include <iostream> // pra usar o comando cout, cin
using namespace std; // com isso n�o precisa escrever std::

int main()
{
setlocale(LC_ALL, "portuguese");// serve pra usar caracteres brasileiros

// o cin � comando leia da linguagem c++
// o cin = character ou console input serve pra ler dados


cout << "digite um n�mero: ";
int valor;
cin >> valor; // coloque o valor nessa vari�vel
cout << "voc� digitou o n�mero: " << valor << endl;


system("pause");
return 0;
}
