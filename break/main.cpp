#include <iostream>
using namespace std;

// o comando break encerra imediatamente a execu��o do loop

int main()
{
setlocale(LC_ALL, "portuguese");

for(int i = 1; i <= 10; i++)
{
	if(i == 6)
	{
		break; // sai do loop quando i == 6
	}
	
	cout << i << endl; // mostra os n�meros
}

system("pause");
return 0;
}
