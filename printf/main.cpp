#include <stdio.h>
#include <iostream>

int main()
{

char letra = 'j'; // %c
char nome[] = "Jonatas"; // %s
int idade = 20; // %i
float meufloat = 2.5; // %f
double meudouble = 3.141592; // %lf

printf("letra %c", letra);
printf("\n"); // pula linha
printf("%s tem %i de idade", nome, idade);
printf("\n"); // pula linha
printf("float %f", meufloat);
printf("\n"); // pula linha
printf("double %lf", meudouble);
printf("\n"); // pula linha

system("pause");
return 0;
}
