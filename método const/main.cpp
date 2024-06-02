#include <iostream>
using namespace std;

// com o m�todo const
// n�o � poss�vel mudar o valor dos membros dentro dele

class fulano
{
	public:
	string name;
	int age;
	
	// m�todo const
	void ShowInformation() const
	{
		// ia dar erro se escrever
		// age++ ou name = "Jonatas"
		// pois � um m�todo const
		
		cout << name << endl;
		cout << age << endl;		
	}
	
	void Set(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};


int main()
{

fulano acesso;

acesso.Set("Jonatas", 20);
acesso.ShowInformation();


system("pause");
return 0;
}
