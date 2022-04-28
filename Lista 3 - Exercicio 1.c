#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
#define AREA(a) ((PI)*(a)*(a))
#define CIRC(a) ((2)*(PI)*(a))

void DesenhaLinha();
void DesligaPrograma();
void calc_circulo(float r, float *circunferencia, float *area);
int main(){

    float r, circunferencia, area;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um valor para o raio: ");
    scanf("%f",&r);

    calc_circulo(r,&circunferencia,&area);

    DesenhaLinha();
    printf("A area do circulo de raio %.2f eh %.2f\n",r,area);
    printf("A circunferencia do circulo de raio %.2f eh %.2f\n");

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
void calc_circulo(float r, float *circunferencia, float *area){

    //Uso de Macros para calcular área e circunferência
    *circunferencia = CIRC(r);
    *area = AREA(r);
}