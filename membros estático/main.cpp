#include <iostream>
using namespace std;

// todos os objetos tem o mesmo valor da vari�vel est�tica

class fulano
{
	public:
	static int valor;
	
	private: int idade;
};

int fulano::valor = 12; // veja com posso iniciar uma vari�vel est�tica

int main()
{

fulano pessoa; // objeto normal
fulano* c = new fulano; // objeto ponteiro

cout << pessoa.valor << endl;
cout << fulano::valor << endl;

delete c;
system("pause");
return 0;
}
