#include <iostream>
#include <string.h> // pra usar a fun��o strcat
using namespace std;

int main()
{

/*
A fun��o strcat concatena duas strings.
O nome "strcat" vem de "string concatenation".
*/

char text1[] = "Jonatas";               // string c
char text2[] = " gosta de programar"; // string c

strcat(text1, text2);


cout << text1 << endl;

system("pause");
return 0;
}
