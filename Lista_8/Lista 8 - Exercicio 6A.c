#include <stdio.h>
#include <stdlib.h>
#define MAX 8

    enum pecas {peao = 1, cavalo, torre, bispo, rei, rainha };

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int tabuleroDeXadrez[MAX][MAX] = {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0},{0,0,0,0,1,0,6,0},{1,0,0,1,1,0,0,1},{0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,0},{1,0,6,6,0,0,1,0},{1,0,5,0,1,1,0,6}};
    register int coluna = 0, linhas = 0;
    int somaTotalPeoesEBispos = 0, posicoesAusentes = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    for(linhas = 0; linhas < MAX; linhas++)
        for(coluna = 0; coluna < MAX; coluna++)
        {
            if (tabuleroDeXadrez[linhas][coluna] == peao || tabuleroDeXadrez[linhas][coluna] == bispo)
                somaTotalPeoesEBispos++;
            if (tabuleroDeXadrez[linhas][coluna] == 0)
                posicoesAusentes++;
        }

    printf("Quantidade de peoes e bispos: %d\n",somaTotalPeoesEBispos);
    printf("Quantidade de posicoes ausentes: %d\n",posicoesAusentes);

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
