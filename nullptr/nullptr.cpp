#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "portuguese");

int a = 0;

// declarado ponteiro que aponta para nulo
// nullprt = NULL
int *p = nullptr; // algumas bibliotecas definine NULL = 0

p = &a;

*p = 8;

cout << *p << endl;

system("pause");
return 0;
}
