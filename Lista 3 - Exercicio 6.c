#include <stdio.h>



void DesenhaLinha();
void DesligaPrograma();
int maiores(int n, int * vet, int x);
int main (){


    int n, *vetorDeInteiros, x, numerosMaioresQueX;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    do{
        printf("Digite um tamanho para o vetor: ");
        scanf("%d",&n);
        if (n <= 0)
            printf("Digite um valor valido!\n");  
    } while (n<=0);

    printf("Digite um numero para comparacao: ");
    scanf("%d",&x);

    vetorDeInteiros = (int *) malloc (n*sizeof(int));

    for(cnt = 0; cnt < n; cnt++){
        printf("Digite %dº numero do vetor: ", cnt+1);
        scanf(" %d",&vetorDeInteiros[cnt]);
    }

    numerosMaioresQueX = maiores(n,vetorDeInteiros,x);
    free(vetorDeInteiros);

    DesenhaLinha();
    printf("Nesse vetor tem %d numero(s) maior(es) que %d\n",numerosMaioresQueX,x);

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

int maiores(int n, int * vet, int x){

    register int cnt = 0;
    int maiores = 0;

    for(cnt = 0; cnt<n; cnt++){
        if (vet[cnt] > x)
            maiores ++;
    }

    return maiores;
}