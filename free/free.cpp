#include <iostream>
#include <time.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "portuguese");

srand(time(NULL));


cout << "qual vai ser a quantidade de elementos do seu array: ";
int n_elementos;
cin >> n_elementos;


// a fun��o malloc serve pra fazer aloca��o din�mica de mem�ria
// a fun��o malloc retorna void, por isso temos que fazer c type casting
int *array = (int *)  malloc(n_elementos * sizeof(int)); // aloca um bloco de mem�ria na heap

for(int i = 0; i < n_elementos; i++)
{
	array[i] = rand() % 16; // gera n�meros aleat�rios de 0 at� 15
	
	cout << array[i] << endl;
}

// A fun��o free desaloca um bloco de mem�ria
// e ela deve ser usada sempre quando a fun��o malloc for chamada antes
free(array);

system("pause");
return 0;
}
