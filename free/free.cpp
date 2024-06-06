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


// a função malloc serve pra fazer alocação dinâmica de memória
// a função malloc retorna void, por isso temos que fazer c type casting
int *array = (int *)  malloc(n_elementos * sizeof(int)); // aloca um bloco de memória na heap

for(int i = 0; i < n_elementos; i++)
{
	array[i] = rand() % 16; // gera números aleatórios de 0 até 15
	
	cout << array[i] << endl;
}

// A função free desaloca um bloco de memória
// e ela deve ser usada sempre quando a função malloc for chamada antes
free(array);

system("pause");
return 0;
}
