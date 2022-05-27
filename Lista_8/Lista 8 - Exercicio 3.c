#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
void PreencheAMatrizOriginal(int **matriz, int ql, int qc);
void FazMatrizTransposta(int **matriz, int ql, int qc, int **matriz2);
int VerificaSeESimetrica(int **matriz, int ql, int qc, int **matriz2);
int main (){

    int **matrizOriginal, quantidadeColuna, quantidadeLinha, **matrizTransposta, resultado;
    register int cnt = 0;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8- Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&quantidadeColuna);
    
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&quantidadeLinha);
    
    matrizOriginal = (int *) malloc (quantidadeLinha*sizeof(int));
    matrizTransposta = (int *) malloc (quantidadeColuna*sizeof(int));
    
    for(cnt = 0; cnt < quantidadeLinha; cnt++)
        matrizOriginal[cnt] = (int *) malloc (quantidadeColuna*sizeof(int));
    for(cnt = 0; cnt < quantidadeColuna; cnt++)
        matrizTransposta[cnt] = (int *) malloc (quantidadeLinha*sizeof(int));


    DesenhaLinha();
    printf("Preenchendo a matriz original\n");
    PreencheAMatrizOriginal(matrizOriginal,quantidadeLinha,quantidadeColuna);

    FazMatrizTransposta(matrizOriginal,quantidadeLinha,quantidadeColuna,matrizTransposta);
           
    resultado = VerificaSeESimetrica(matrizOriginal,quantidadeLinha,quantidadeColuna,matrizTransposta);
        
    if(resultado==0)
        printf("Matriz nao simetrica!");
    else
        printf("Matriz simetrica!");




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
void PreencheAMatrizOriginal(int **matriz, int ql, int qc){

    register int l = 0, c = 0;
    for(l = 0; l < ql; l++)
        for(c = 0; c < qc; c++)
        {
            printf("Digite um valor para a linha %d coluna %d da matriz 1: ",l+1,c+1);
            scanf("%d",&matriz[l][c]);
        }
}
void FazMatrizTransposta(int **matriz, int ql, int qc, int **matriz2){
    
    register int l = 0, c = 0;
    for(l = 0; l < ql; l++)
        for(c = 0; c < qc; c++)
           matriz2[l][c] = matriz[c][l];
}
int VerificaSeESimetrica(int **matriz, int ql, int qc, int **matriz2){
    
    int igualdades;
    register int l = 0, c = 0;
    
    if (qc!=ql)
        return 0;
    
    for(l = 0; l < ql; l++)
        for(c = 0; c < qc; c++)
            if(matriz2[l][c]==matriz[l][c])
                igualdades++;
    if (igualdades == (qc*ql))
        return 1;
    
    return 0;
}
