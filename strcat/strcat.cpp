#include <iostream>
#include <string.h> // pra usar a função strcat
using namespace std;

int main()
{

/*
A função strcat concatena duas strings.
O nome "strcat" vem de "string concatenation".
*/

char text1[] = "Jonatas";               // string c
char text2[] = " gosta de programar"; // string c

strcat(text1, text2);


cout << text1 << endl;

system("pause");
return 0;
}
