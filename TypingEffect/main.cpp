#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// essa função desacelera o tempo
void Sleep(int delay)
{
	int timer = 0;
	while(timer < delay)
	{
		timer++;
	}
}

// essa função monstra o texto com efeito de escrever
void TypingEffect(string text, int delay)
{
	 for(int j = 0; j < text.size(); j++)
     {
          Sleep(delay);
          cout << text[j];
     }
}


int main()
{
setlocale(LC_ALL, "portuguese");

TypingEffect("Seja bem vindo! esse programa foi feito em c++",100000000);

cout << "\n";
system("pause");
return 0;
}
