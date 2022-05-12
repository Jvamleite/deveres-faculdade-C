#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 7

void DesenhaLinha();
void DesligaPrograma();
void PreencheVetor(int *vetor);
void ImprimeListaVetores(int *vetor);
int EncontraValorNaLista(int valor, int *lista);
void TrocaValores(int *vetor);
int main (){


    int vetorDeInteiros[TAMANHO], valorProcurado, resultado;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    PreencheVetor(vetorDeInteiros);

    DesenhaLinha();
    ImprimeListaVetores(vetorDeInteiros);
    DesenhaLinha();

    printf("Digite o valor que deseja procurar no vetor: ");
    scanf("%d",&valorProcurado);

    resultado = EncontraValorNaLista(valorProcurado,vetorDeInteiros);
    DesenhaLinha();
    if (resultado == -1)
        printf("Valor nao existe no vetor!\n");
    else{
        printf("Valor encontrado!\n");
        printf("O valor procurado esta na posicao %d\n",resultado);
    }
    DesenhaLinha();

    TrocaValores(vetorDeInteiros);

    printf("Vetor com valores trocados: ");
    for(cnt = 0; cnt < TAMANHO; cnt++){
        printf("%d ",vetorDeInteiros[cnt]);
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
void PreencheVetor(int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < TAMANHO; cnt++){
        printf("Digite o %d valor: ",cnt+1);
        scanf("%d",&vetor[cnt]);
    }
}
void ImprimeListaVetores(int *vetor){

    register int cnt = 0;

    for(cnt = 0; cnt < TAMANHO; cnt++){
        printf("posicao %d: %d\n",cnt+1,vetor[cnt]);
    }
}
int EncontraValorNaLista(int valor, int *lista){

    register int cnt = 0;

    for(cnt = 0; cnt < TAMANHO; cnt++){
        if (valor == lista[cnt]){
            return cnt+1;
        }
    }

    return -1;

}
void TrocaValores(int *vetor){


    int vetorCopia[TAMANHO];
    register int cnt = 0, cnt2 = 0;

    for(cnt = 0; cnt < TAMANHO; cnt++){
        vetorCopia[cnt] = vetor[cnt];
    }

    for(cnt2 = 0; cnt2 < TAMANHO; cnt2++){
        vetor[cnt2+1] = vetorCopia[cnt2] + vetorCopia[cnt2+1];
        vetorCopia[cnt2+1] = vetor[cnt2+1];   
    }


}

