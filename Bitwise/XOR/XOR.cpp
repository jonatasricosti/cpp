#include <iostream>
using namespace std;

int main()
{
// XOR ^
// 1 ^ 1 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1
// 0 ^ 0 = 0

//  65 ^ 53
//  01000001 = 65
//  00110101 = 53
//  ________
//  01110100 = 116


// 116 decimal na tabela ASCII é a letra t
char letra = 65 ^ 53;

cout << letra << endl;


system("pause");
return 0;
}
