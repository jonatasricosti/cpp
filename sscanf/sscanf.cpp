#include <iostream>
using namespace std;

int main()
{

/*
a fun��o sscanf l� dados formatados de uma string c
l� dados de uma string c
e os armazena de acordo com o formato do par�metro nos locais fornecidos
pelos argumentos adicionais, como se scanf fosse usado, mas lendo de uma string c
em vez da entrada padr�o (stdin).
*/

char sentence[] = "Jonatas tem 16"; // string c
char nome[100]; // string c
int idade; // vari�vel tipo int

// o %*s vai ignorar a palavra tem
sscanf(sentence,"%s %*s %d",nome,&idade);

cout << nome << " tem " << idade << " anos de idade" << endl;

system("pause");
return 0;
}
