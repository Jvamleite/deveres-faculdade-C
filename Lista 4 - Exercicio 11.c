#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int vetor1[MAX], vetor2[MAX], resultados[MAX];
    char operacoes[MAX];
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");

    for(cnt = 0; cnt < MAX; cnt++){
        printf("Digite um numero para o vetor 1: ");
        scanf("%d",&vetor1[cnt]);
        printf("Digite um numero para o vetor 2: ");
        scanf("%d",&vetor2[cnt]);
        printf("Digite a operacao para fazer com eles [+,-,*,/]: ");
        fflush(stdin);
        scanf(" %c",&operacoes[cnt]);
        switch (operacoes[cnt])
        {
        case '+':
            resultados[cnt] = vetor1[cnt] + vetor2[cnt];
            break;
        case '-':
            resultados[cnt] = vetor1[cnt] - vetor2[cnt];
            break;
        case '*':
            resultados[cnt] = vetor1[cnt] * vetor2[cnt];
            break;
        case '/':
            resultados[cnt] = vetor1[cnt] / vetor2[cnt];
            break;
        }
    }
    
    DesenhaLinha();
    for(cnt = 0; cnt < MAX; cnt++)
        printf("Resultado %d: %d\n",cnt+1,resultados[cnt]);

    

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
