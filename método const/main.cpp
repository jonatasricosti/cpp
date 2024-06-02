#include <iostream>
using namespace std;

// com o método const
// não é possível mudar o valor dos membros dentro dele

class fulano
{
	public:
	string name;
	int age;
	
	// método const
	void ShowInformation() const
	{
		// ia dar erro se escrever
		// age++ ou name = "Jonatas"
		// pois é um método const
		
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
