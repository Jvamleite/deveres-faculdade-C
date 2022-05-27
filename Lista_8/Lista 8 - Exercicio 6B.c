#include <stdio.h>
#include <stdlib.h>
#define MAX 8

    enum pecas {peao = 1, cavalo, torre, bispo, rei, rainha };

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int tabuleroDeXadrez[MAX][MAX] = {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0},{0,0,0,0,1,0,6,0},{1,0,0,1,1,0,0,1},{0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,0},{1,0,6,6,0,0,1,0},{1,0,5,0,1,1,0,6}};
    register int coluna = 0, linhas = 0, cnt = 0;
    int quantidadePecas[6];

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    for(cnt = 0; cnt < 6; cnt++)
        quantidadePecas[cnt]  = 0;
    
    for(linhas = 0; linhas < MAX; linhas++)
        for(coluna = 0; coluna < MAX; coluna++)
            switch (tabuleroDeXadrez[linhas][coluna])
            {
            case peao:
                quantidadePecas[0]++;
                break;
            case cavalo:
                quantidadePecas[1]++;
                break;
            case torre:
                quantidadePecas[2]++;
                break;
            case bispo:
                quantidadePecas[3]++;
                break;
            case rei:
                quantidadePecas[4]++;
                break;
            case rainha:
                quantidadePecas[5]++;
                break;
            default:
                break;
            }
    
    printf("Quantidae peoes: %d\n",quantidadePecas[0]);
    printf("Quantidae cavalo: %d\n",quantidadePecas[1]);
    printf("Quantidae torre: %d\n",quantidadePecas[2]);
    printf("Quantidae bispo: %d\n",quantidadePecas[3]);
    printf("Quantidae rei: %d\n",quantidadePecas[4]);
    printf("Quantidae rainha: %d\n",quantidadePecas[5]);
    
        


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
