#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
float *acima_da_media(int n, float *vet, int *tam);
int main (){


    float vet[MAX], *vetAcimaDaMedia, mediaVet, somaDosValores = 0;
    int *tam;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");

    

for(cnt = 0; cnt < MAX; cnt++)
        somaDosValores += vet[cnt];

    mediaVet = somaDosValores/MAX;

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
float *acima_da_media(int n, float *vet, int *tam){

    for(cnt = 0; cnt < MAX; cnt++)
        somaDosValores += vet[cnt];

    mediaVet = somaDosValores/MAX;    

}
