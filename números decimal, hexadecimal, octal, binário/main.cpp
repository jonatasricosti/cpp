#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "portuguese"); // serve pra usar caracteres brasileiros 

int a = 10;         // n�mero decimal
int b = 0x14;       // n�mero hexadecimal
int c = 036;        // n�mero octal
int d = 0b00101000; // n�mero bin�rio

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;

system("pause");
return 0;
}
