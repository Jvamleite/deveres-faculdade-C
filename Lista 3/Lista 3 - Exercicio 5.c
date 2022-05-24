#include<stdio.h>
#include<stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
float max_vet (int n, float *vet);
int main (){

    int n;
    float maiorNumero, *vetorDeNumeros;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");

    do{
        printf("Digite um tamanho para o vetor: ");
        scanf("%d",&n);
        if (n <= 0)
            printf("Digite um valor válido!\n");  
    } while (n<=0);

    vetorDeNumeros = (float *) malloc (n*sizeof(float));

    for(cnt = 0; cnt < n; cnt++){
        printf("Digite %dº numero do vetor: ", cnt+1);
        scanf(" %f",&vetorDeNumeros[cnt]);
    }

    if (n == 1)
        maiorNumero = vetorDeNumeros[0];
    else{
        maiorNumero = max_vet(n,vetorDeNumeros);
        free(vetorDeNumeros);
    }

    DesenhaLinha();
    printf("O maior numero do vetor eh o %.2f\n",maiorNumero);

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
float max_vet(int n, float *vet){
    float maior = vet[0];
    register int cnt = 0;
    for(cnt = 1; cnt<n;cnt++){
        if (vet[cnt] > maior)
            maior = vet[cnt];
    }

    return maior;
}