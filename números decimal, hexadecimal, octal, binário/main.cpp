#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "portuguese"); // serve pra usar caracteres brasileiros 

int a = 10;         // número decimal
int b = 0x14;       // número hexadecimal
int c = 036;        // número octal
int d = 0b00101000; // número binário

cout << a << endl;
cout << b << endl;
cout << c << endl;
cout << d << endl;

system("pause");
return 0;
}
