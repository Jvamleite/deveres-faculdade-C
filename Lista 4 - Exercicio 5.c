#include <stdio.h>
#include <stdlib.h>
#define TARIFAINICIAL 4.95
#define BANDEIRA1 2.50
#define BANDEIRA2 3.00

void calcula_corrida(float dist, float *b1, float *b2);
int main (){

    float dist, valorCorridaB1, valorCorridabB2;

    scanf("%f",&dist);

    calcula_corrida(dist,&valorCorridaB1,&valorCorridabB2);

    printf("Valor na bandeira 1: %.2f\n",valorCorridaB1);

    printf("Valor na bandeira 2: %.2f\n",valorCorridabB2);





    return 0;
}
void calcula_corrida(float dist, float *b1, float *b2){

    *b1 = TARIFAINICIAL + (dist*BANDEIRA1);

    *b2 = TARIFAINICIAL + (dist*BANDEIRA2);


}
