#include <iostream>
using namespace std;

// o comando continue ignora algo dentro de laços de repetição (loops) 


int main()
{
setlocale(LC_ALL, "portuguese");

for(int i = 1; i <= 10; i++)
{
	if(i == 2)
	{
		continue; // ignora o número 2
	}
	
	cout << i << endl; // mostra todos os números menos o 2
}

system("pause");
return 0;
}
