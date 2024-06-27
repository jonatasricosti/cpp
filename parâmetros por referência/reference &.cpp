#include <iostream>
using namespace std;


void duplicate (int& a, int& b, int& c)
{
	a = a*2;
	b = b*2;
	c = c*2;
}

int main ()
{

// com & o x = a, y = b  z = c

int x = 1;
int y = 3;
int z = 7;

duplicate (x, y ,z);

cout << "x=" << x << "\n";
cout << "y=" << y << "\n";
cout << "z=" << z << "\n";

system ("pause");
return 0;
}
