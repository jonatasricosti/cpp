#include <iostream>
#include <stdlib.h>
using namespace std;

const unsigned short picPalette[] = 
{0x0009, 0x000100, 0x000300, 0x00500, 0x00800};

int main()
{
setlocale(LC_ALL, "portuguese");

cout << "número de elementos do array " << sizeof(picPalette) / sizeof(unsigned short) << endl;

// short = 16bits
// 16bits = 2bytes
// cada elemento tem 2bytes
// tem 5 elementos logo
// 2*5 = 10
cout << "tamanho dos bytes " << sizeof(picPalette) << endl;
system("pause");
return 0;
}
