#include <iostream>
using namespace std;

// diferença entre if, else if, e else
int main()
{
int x = 5;

if(x > 1) cout << "eu" << endl;
if(x > 2) cout << "ele"  << endl;
if(x > 3) cout << "ela"  << endl;

cout << "\n\n";

if(x > 1) cout << "meu" << endl;
else if(x > 2) cout << "dele"  << endl; // precisa do if anterior
else  cout << "dela"  << endl;          // se não foi if ou else if execute isso

system("pause");
return 0;
}
