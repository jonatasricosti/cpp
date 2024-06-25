#include <iostream>
using namespace std;

int main()
{
// OR |
// 1 | 1 = 1
// 1 | 0 = 1
// 0 | 1 = 1
// 0 | 0 = 0

//  65 | 67
//  01000001 = 65
//  01000011 = 67
//  ________
//  01000011 = 67


// 67 decimal na tabela ASCII é a letra C
char letra = 65 | 67;

cout << letra << endl;


system("pause");
return 0;
}
