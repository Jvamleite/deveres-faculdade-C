#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7


void DesenhaLinha();
void DesligaPrograma();
int main (){


    int vetorDeInteiros[TAMANHO];
    register int cnt = 0;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    for(cnt = 0; cnt < TAMANHO; cnt++){
        scanf("%d",&vetorDeInteiros[cnt]);
    }

    

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

