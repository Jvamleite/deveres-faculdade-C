#include <stdio.h>
#include <stdlib.h>
#define MIN 1000
#define MAX 9999

void DesenhaLinha();
void DesligaPrograma();
int main (){

    int primeiraDezena, segundaDezena, somaDasDezenas;
    register int cnt = 1000;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 8\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Resultado = ");
    for(cnt = MIN; cnt<=MAX; cnt++){
        primeiraDezena = cnt/100;
        segundaDezena = cnt%100;
        somaDasDezenas = primeiraDezena + segundaDezena;
        if ((somaDasDezenas*somaDasDezenas) == cnt )
            printf(" %d ", cnt);
    }
    printf("\n");
    DesligaPrograma();

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