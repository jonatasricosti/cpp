#include <iostream>
using namespace std;

int main()
{

/*
a função sscanf lê dados formatados de uma string c
lê dados de uma string c
e os armazena de acordo com o formato do parâmetro nos locais fornecidos
pelos argumentos adicionais, como se scanf fosse usado, mas lendo de uma string c
em vez da entrada padrão (stdin).
*/

char sentence[] = "Jonatas tem 16"; // string c
char nome[100]; // string c
int idade; // variável tipo int

// o %*s vai ignorar a palavra tem
sscanf(sentence,"%s %*s %d",nome,&idade);

cout << nome << " tem " << idade << " anos de idade" << endl;

system("pause");
return 0;
}
