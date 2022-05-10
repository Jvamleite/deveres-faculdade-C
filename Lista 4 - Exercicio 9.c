#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

void DesenhaLinha();
void DesligaPrograma();
void PreencheVetor(int *vetor);
int main (){


    int vetorDeInteiros[TAMANHO], valorProcurado, vetorCopia[TAMANHO];
    register int cnt = 0;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    PreencheVetor(vetorDeInteiros);

    cnt = 0;
    for(cnt = 0; cnt < TAMANHO; cnt++){
        printf("posicao %d: %d\n",cnt+1,vetorDeInteiros[cnt]);
    }

    scanf("%d",&valorProcurado);
    for(cnt = 0; cnt < TAMANHO; cnt++){
        if (valorProcurado == vetorDeInteiros[cnt]){
            printf("Valor encontrado!\n");
            printf("O valor procurado está na posicao %d\n",cnt+1);
        }
    }

    cnt = 0;
    for(cnt = 0; cnt < TAMANHO; cnt++){
        vetorCopia[cnt] = vetorDeInteiros[cnt];
    }

    cnt = 0;
    for(cnt = 0; cnt < TAMANHO; cnt++){
        vetorDeInteiros[cnt+1] = vetorCopia[cnt] + vetorCopia[cnt+1];
        vetorCopia[cnt+1] = vetorDeInteiros[cnt+1];   
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
void PreencheVetor(int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < TAMANHO; cnt++){
        scanf("%d",&vetor[cnt]);
    }
}

