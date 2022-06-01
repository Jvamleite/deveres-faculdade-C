#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int VerificaSomaLinhas (int *matriz, int *soma, int ql);
int main (){

    int **matriz, quantidadeColuna, quantidadeLinha, *somaLinhas;
    register int linha = 0, coluna = 0, cnt = 0, resultado;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&quantidadeColuna);
    
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&quantidadeLinha);

    somaLinhas = (int *) malloc (quantidadeLinha*sizeof(int));
    matriz = (int *) malloc (quantidadeLinha*sizeof(int));
    
    for(cnt = 0; cnt < quantidadeLinha; cnt++){
        matriz[cnt] = (int *) malloc (quantidadeColuna*sizeof(int));
        somaLinhas[cnt] = 0;
    }

    DesenhaLinha();
    printf("Preenchendo a matriz 1\n");
    for(linha = 0; linha < quantidadeLinha; linha++){
        for(coluna = 0; coluna < quantidadeColuna; coluna++)
        {
            printf("Digite um valor para a linha %d coluna %d da matriz: ",linha+1,coluna+1);
            scanf("%d",&matriz[linha][coluna]);
            somaLinhas[linha] += matriz[linha][coluna];
        }
    }
    
    resultado = VerificaSomaLinhas(matriz, somaLinhas, quantidadeLinha);
        
    if(resultado == 1)
        printf("Soma nao corresponde\n");
    else
        printf("Soma corresponde\n");


    free(matriz);
    free(somaLinhas);
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
int VerificaSomaLinhas (int *matriz, int *soma, int ql){

    register int cnt = 0, aux = 0;

    for(cnt = 0; cnt <ql-1; cnt++){
        if (soma[cnt] == soma[cnt+1])
            continue;
        aux = 1;
    }

    return aux;
}
