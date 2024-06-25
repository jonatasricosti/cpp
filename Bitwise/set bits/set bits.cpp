#include <iostream>
using namespace std;

int main()
{

// pra ativar o n bit
// 1 << n  onde n é a posição onde você quer ativar o bit
// ou seja colocar 1 ou set bit

int a = 0b00000000;
cout << "primeiro valor de a: " << a << endl;
a = 1 << 0; // ativa o bit 0 0b00000001 = 2^0 = 1 decimal
cout << "segundo valor de a: " << a << endl;

a = 1 << 6; // ativa o bit 6 0b01000000 = 2^6 = 64 decimal
cout << "terceiro valor de a: " << a << endl;

a = 1 << 7; // ativa o bit 7 0b70000000 = 2^7 = 128 decimal
cout << "quarto valor de a: " << a << endl;
// note que muda de valor a variável


// pra ativar dois ou mais bits usamos o operador |
// 39 em binário é 100111

a = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 5; // ativa os bits 0,1,2,5
cout << a << endl;

a = 1 << 7;
a = a | 1 << 3; //2^7+2^3 = 128+8 = 136 // 0b10001000

cout << a << endl;

system("pause");
return 0;
}
