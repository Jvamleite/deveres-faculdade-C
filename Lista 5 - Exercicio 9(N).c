#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXE 20
#define MAXT 11
#define MAXN 20

#ifndef MAX
#define MAX MAXE+MAXT+MAXN
#endif


void DesenhaLinha();
void DesligaPrograma();
int main (){


    char nome[MAXN], endereco[MAXE], telefone[MAXT], resposta[MAX];

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    scanf("%[^\n]",&nome);
    scanf("%[^\n]",&endereco);
    scanf("%[^\n]",&telefone);

    memccpy(memccpy(resposta, nome, '\0', MAX) -1, endereco, '\0', MAX);

    printf("%s",resposta);

    



    DesenhaLinha();



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
