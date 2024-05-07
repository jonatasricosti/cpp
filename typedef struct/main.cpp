#include <iostream>
using namespace std;

// por padrão numa struct os membros são public/públicos
typedef struct fulano
{
	string nome;
	int idade;	
}fulano;

// typedef struct serve pra não ter que escrever struct fulano objeto
// em compiladores antigos da linguagem c

//struct fulano objeto em compiladores antigos da linguagem c, se não fosse typedef struct
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

cout << "meu nome é "<< objeto.nome << " tenho " << objeto.idade  << " ano de idade" << endl;

system("pause");
return 0;
}
