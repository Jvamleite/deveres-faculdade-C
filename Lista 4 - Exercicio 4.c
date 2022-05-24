#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int testa_PA(int n, int* v);
int main (){


    int k, *vetor, n;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");


    printf("Digite o tamanho da vetor: ");
    scanf("%d",&n);

    vetor = (int *) malloc (n*sizeof(int));

    for(cnt = 0; cnt < n; cnt++){
        printf("Digite o elemento numero %d do vetor: ",cnt+1);
        scanf("%d",&vetor[cnt]);
    }

    k = testa_PA(n,vetor);

    DesenhaLinha();
    if (k == 0)
        printf("Esse vetor nao eh uma PA\n");
    else{
        printf("O vetor eh uma PA!\n");
        printf("A razao dessa progrecao eh: %d\n",k);
    }

    free(vetor);
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
int testa_PA(int n, int* v){

    register int cnt = 0;
    int k;

    for(cnt = 0; cnt < n-1; cnt++){
        k = v[cnt+1] - v[cnt];
        //Termo geral da PA
        if(v[cnt] == (v[0]+((cnt+1)-1)*k))
            continue;
        return 0;
    }

    return k;
}