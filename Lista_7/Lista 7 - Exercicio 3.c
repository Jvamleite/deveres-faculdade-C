#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void DesenhaLinha();
void DesligaPrograma();
void PreencheVetorComOsMultiplosDe5(int *vetor);
void ImprimeVetor(int *vetor);
int main (){


    int vetor[MAX];
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 7 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    PreencheVetorComOsMultiplosDe5(vetor);

    ImprimeVetor(vetor);

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
void PreencheVetorComOsMultiplosDe5(int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < MAX; cnt++)
        vetor[cnt] = 5 * cnt;
}
void ImprimeVetor(int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < MAX; cnt++)
        printf("%d multiplo de 5: %d\n",cnt,vetor[cnt]);
}
