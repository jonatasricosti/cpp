#include <iostream>
using namespace std;

// por padr�o numa struct os membros s�o public/p�blicos
typedef struct fulano
{
	string nome;
	int idade;	
}fulano;

// typedef struct serve pra n�o ter que escrever struct fulano objeto
// em compiladores antigos da linguagem c

//struct fulano objeto em compiladores antigos da linguagem c, se n�o fosse typedef struct
fulano objeto;

void init()
{
	objeto.nome = "Jonatas";
	objeto.idade = 20;
}

int main()
{
setlocale(LC_ALL, "portuguese"); // serve pra usar caracteres brasileiros 

init();

cout << "meu nome � "<< objeto.nome << " tenho " << objeto.idade  << " ano de idade" << endl;

system("pause");
return 0;
}
