#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
void repeticao(int *vet, int tam);
int main (){

    int tam, *vet;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 6 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    srand(time(NULL));

    printf("Digite um tamanho pro vetor: ");
    scanf("%d",&tam);

    vet = (int *) malloc (tam*sizeof(int));

   repeticao(vet,tam);

    free(vet);

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
void repeticao(int *vet, int tam){

    register int cnt = 0, cnt2 = 0;

    DesenhaLinha();
    printf("Vetor vet: ");
    for(cnt = 0; cnt < tam; cnt++){
        vet[cnt] = rand()%10;
        printf("\n%d",vet[cnt]);
    }



    printf("\nRepeticoes no vetor: ");
    for(cnt = 0; cnt < tam; cnt++)
        for(cnt2 = cnt+1; cnt2 < tam; cnt2++)
            if (vet[cnt] == vet[cnt2])
                printf("%d ",vet[cnt]);
    printf("\n");

}
