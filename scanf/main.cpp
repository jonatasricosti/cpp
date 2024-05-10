#include <stdio.h>
#include <iostream>

int main()
{

char letra; // %c
char nome[100]; // %s
int idade; // %i
float meufloat; // %f
double meudouble; // %lf


printf("digite um letra: ");
scanf("%c", &letra);
printf("letra %c", letra);
printf("\n"); // pula linha

printf("digite seu primeiro nome: ");
scanf("%s", &nome);

printf("digite sua idade: ");
scanf("%i", &idade);

printf("%s tem %i anos de idade", nome, idade);
printf("\n"); // pula linha

printf("digite um float: ");
scanf("%f", &meufloat);
printf("float %f", meufloat);
printf("\n"); // pula linha


printf("digite um double: ");
scanf("%lf", &meudouble);
printf("double %lf", meudouble);
printf("\n"); // pula linha

system("pause");
return 0;
}
