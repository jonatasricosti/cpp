#include <iostream>
using namespace std;

/*
o tempo de vida de uma vari�vel est�tica
� durante toda a execu��o do programa e
quando voc� sai de uma fun��o ela continua existindo
*/

void show()
{
	static int frame = 0;
	frame++;
	cout << frame << endl;
}

void see()
{
	int frame = 0;
	frame++;
	cout << frame << endl;
}

int main()
{
show();
show();
see();
see();

// vari�veis est�ticas tamb�m podem ser usadas em loops
// j� que com elas podemos trocar o valor

cout << endl;
cout << endl;
bool executando = true;


while(executando)
{
	int valor = 0;
	static int number = 0;
	if(number >= 5)
	{
		executando = false;
	}
	
	cout << "valor: " << valor << endl;
	cout << "number: " << number << endl;
	
	valor++; // veja que essa vari�vel vai continuar sendo 0
	number++; // j� essa como � est�tica troca de valor em um loop
}


system("pause");
return 0;	
}
