#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "portuguese"); 


/*
A função system serve pra executar comandos do terminal
diretamente no seu programa
cada sistema operacional têm seu próprios comandos
*/


system("color 25");// cor de fundo verde e a cor da letra roxo do terminal
system("notepad.exe");// abre o bloco de notas no windows
system("pause"); // mostra Pressione qualquer tecla para continuar.


return 0;
}
