#include <iostream>
using namespace std;

int main()
{
// AND &
// 1 & 1 = 1
// 1 & 0 = 0
// 0 & 1 = 0
// 0 & 0 = 0

//  65 & 67
//  01000001 = 65
//  01000011 = 67
//  ________
//  01000001 = 65

// 65 decimal na tabela ASCII é a letra A

char letra = 65 & 67;

cout << letra << endl;


system("pause");
return 0;
}
