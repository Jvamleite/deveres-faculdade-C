#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int *repeticao(int *vet, int tam, int *n);
int main (){

    int tam, *vet, n, *p;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 6 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    srand(time(NULL));

    printf("Digite um tamanho pro vetor: ");
    //scanf("%d",&tam);

    vet = (int *) malloc (tam*sizeof(int));

    p = repeticao(vet,tam,&n);

    for(cnt = 0; cnt < n; cnt++){
        printf("%d, ",p[cnt]);
    }
    printf("\b");


    free(vet);
    free(p);

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
int *repeticao(int *vet, int tam, int *n){

    register int cnt = 0, cnt2 = 0, cnt3 = 0;
    int *repeticoes;

    *n = 0;

    for(cnt = 0; cnt < tam; cnt++){
        vet[cnt] = rand()%10;
    }
    
    for(cnt = 0; cnt < tam; cnt++)
        for(cnt2 = cnt+1; cnt2 < tam; cnt2++)
            if (vet[cnt] == vet[cnt2])
                *n++;

    repeticoes = (int *) malloc ((*n)*sizeof(int));

    for(cnt = 0; cnt < tam; cnt++)
        for(cnt2 = cnt+1; cnt2 < tam; cnt2++)
            if (vet[cnt] == vet[cnt2])
                repeticoes[cnt3] = vet[cnt];


    return repeticoes;

}
