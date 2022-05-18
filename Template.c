#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");


    



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
