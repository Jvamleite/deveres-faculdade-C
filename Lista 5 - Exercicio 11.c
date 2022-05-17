#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int main (){



    char fraseDoUsuario[MAX];
    int tamanhoDaString;
    register int cnt;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 11\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&fraseDoUsuario);

    tamanhoDaString = strlen(fraseDoUsuario);

    DesenhaLinha();

    for (cnt = tamanhoDaString; cnt >= 0; cnt--)
        printf("%c",fraseDoUsuario[cnt]);
    printf("\n");

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
