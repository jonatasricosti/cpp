#include <iostream>
using namespace std;

int main()
{
// operador ~ n�o, inverte o bit
// ~0 = 1;
// ~1 = 0;

char letra = ~ -76;

//   -76 = 10110100
// ~ -76 = 01001011

//    75 = 01001011

// 75 decimal na tabela ASCII � a letra K
cout << letra << endl;


system("pause");
return 0;
}
