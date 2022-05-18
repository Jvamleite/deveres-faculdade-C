#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 200

void DesenhaLinha();
void DesligaPrograma();
int main (){

    char recebeString[MAX],*cadastroUsuario;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");

    scanf("%[^\n]",&recebeString);

    cadastroUsuario = (char *) malloc (strlen(recebeString)*sizeof(char));

    

    DesligaPrograma();

    return 0;
}
void DesenhaLinha(){

printf("====================================\n");

}
void DesligaPrograma(){
    DesenhaLinha();
    printf("Fim do Programa. Desligando...");
    sleep(1);
    exit(0);

}
