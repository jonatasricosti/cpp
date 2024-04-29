#include <iostream>
using namespace std;

/*
o tempo de vida de uma variável estática
é durante toda a execução do programa e
quando você sai de uma função ela continua existindo
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

// variáveis estáticas também podem ser usadas em loops
// já que com elas podemos trocar o valor

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
	
	valor++; // veja que essa variável vai continuar sendo 0
	number++; // já essa como é estática troca de valor em um loop
}


system("pause");
return 0;	
}
