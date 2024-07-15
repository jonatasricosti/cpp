#include <iostream>
using namespace std;


// múltiplos if vs if, else if, else

int main()
{


int x = 5;

// quando temos múltiplos if todos eles são executados
if(x > 1) cout << "eu" << endl;
if(x > 2) cout << "ele"  << endl;
if(x > 3) cout << "ela"  << endl;


cout << "\n\n";

/*
quando não temos múltiplos if,
ou seja, temos else if ou else somente um código é executado
*/

if(x > 1) cout << "meu" << endl;
else if(x > 2) cout << "dele"  << endl; // precisa do if anterior
else  cout << "dela"  << endl;          // se não foi if ou else if execute isso

system("pause");
return 0;
}
