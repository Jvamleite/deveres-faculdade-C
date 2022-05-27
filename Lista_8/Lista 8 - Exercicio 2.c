#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    int **matriz1, **matriz2, **matrizResultado, quantidadeColuna, quantidadeLinha;
    register int linha = 0, coluna = 0, cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8- Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");
    
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&quantidadeColuna);
    
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&quantidadeLinha);
    
    matriz1 = (int *) malloc (quantidadeLinha*sizeof(int));
    matriz2 = (int *) malloc (quantidadeLinha*sizeof(int));
    matrizResultado = (int *) malloc (quantidadeLinha*sizeof(int));
    
    for(cnt = 0; cnt < quantidadeLinha; cnt++)
    {
        matriz1[cnt] = (int *) malloc (quantidadeColuna*sizeof(int));
        matriz2[cnt] = (int *) malloc (quantidadeColuna*sizeof(int));
        matrizResultado[cnt] = (int *) malloc (quantidadeColuna*sizeof(int));
    }

    DesenhaLinha();
    printf("Preenchendo a matriz 1\n");
    for(linha = 0; linha < quantidadeLinha; linha++)
        for(coluna = 0; coluna < quantidadeColuna; coluna++)
        {
            printf("Digite um valor para a linha %d coluna %d da matriz 1: ",linha+1,coluna+1);
            scanf("%d",&matriz1[linha][coluna]);
        }
    DesenhaLinha();
    printf("Preenchendo a matriz 2\n");
    for(linha = 0; linha < quantidadeLinha; linha++)
        for(coluna = 0; coluna < quantidadeColuna; coluna++)
        {
            printf("Digite um valor para a linha %d coluna %d da matriz 2: ",coluna+1,linha+1);
            scanf("%d",&matriz2[linha][coluna]);
        }
    DesenhaLinha();
    printf("Resultado da soma: \n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 4; coluna++)
        {
            matrizResultado[linha][coluna] = matriz1[linha][coluna] + matriz2[linha] [coluna];
            printf("%d ",matrizResultado[linha][coluna]);
        }
        printf("\n");
    }
    DesenhaLinha();
    
    for(cnt = 0; cnt < quantidadeLinha; cnt++)
    {
        free(matriz1[cnt]);
        free(matriz2[cnt]);
        free(matrizResultado[cnt]);
    }
    free(matriz1);
    free(matriz2);
    free(matrizResultado);

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
