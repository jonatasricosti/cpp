#include <iostream>
using namespace std;


// m�ltiplos if vs if, else if, else

int main()
{


int x = 5;

// quando temos m�ltiplos if todos eles s�o executados
if(x > 1) cout << "eu" << endl;
if(x > 2) cout << "ele"  << endl;
if(x > 3) cout << "ela"  << endl;


cout << "\n\n";

/*
quando n�o temos m�ltiplos if,
ou seja, temos else if ou else somente um c�digo � executado
*/

if(x > 1) cout << "meu" << endl;
else if(x > 2) cout << "dele"  << endl; // precisa do if anterior
else  cout << "dela"  << endl;          // se n�o foi if ou else if execute isso

system("pause");
return 0;
}
