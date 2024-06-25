#include <iostream>
using namespace std;

int main()
{
// x << n = x*2^n
// x >> n = x/2^n

// 5   decimal = 0000000101 binário
// 256 decimal = 0000001000 binário

// 0000000101 << 3
// 0000101000 << 3
float a = 5 << 3;

// 0100000000 >> 5
// 0000001000 >> 5
float b = 256 >> 5;

cout << "pra esquerda: " << a << endl;
cout << "pra direita: " << b << endl;

system("pause");
return 0;
}
