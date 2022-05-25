#include <stdio.h>
#include <stdlib.h>



void DesenhaLinha();
void DesligaPrograma();
void PreencheVetorComOsMultiplosDe5(int n, int *vetor);
void ImprimeVetor(int n, int *vetor);
int main (){


    int *vetor, n;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 7 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite quantos multiplos de 5 devemos imprimir: ");
    scanf("%d",&n);

    vetor = (int *) malloc (n*sizeof(int));

    PreencheVetorComOsMultiplosDe5(n,vetor);

    ImprimeVetor(n,vetor);

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
void PreencheVetorComOsMultiplosDe5(int n, int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < n; cnt++)
        vetor[cnt] = 5 * cnt;
}
void ImprimeVetor(int n, int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < n; cnt++)
        printf("%d multiplo de 5: %d\n",cnt,vetor[cnt]);
}
