#include <stdio.h>
#include <stdlib.h>
#define TARIFAINICIAL 4.95
#define BANDEIRA1 2.50
#define BANDEIRA2 3.00

void DesenhaLinha();
void DesligaPrograma();
void calcula_corrida(float dist, float *b1, float *b2);
int main (){

    float dist, valorCorridaB1, valorCorridabB2;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite a distancia percorrida pelo taxi: ");
    scanf("%f",&dist);

    calcula_corrida(dist,&valorCorridaB1,&valorCorridabB2);

    DesenhaLinha();
    printf("Valor na bandeira 1: %.2f\n",valorCorridaB1);
    printf("Valor na bandeira 2: %.2f\n",valorCorridabB2);


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
void calcula_corrida(float dist, float *b1, float *b2){

    *b1 = TARIFAINICIAL + (dist*BANDEIRA1);

    *b2 = TARIFAINICIAL + (dist*BANDEIRA2);


}
