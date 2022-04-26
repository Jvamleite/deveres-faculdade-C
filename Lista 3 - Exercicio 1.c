#include <stdio.h>
#include <locale.h>
#define PI 3.14159265
#define AREA(a) ((PI)*(a)*(a))
#define CIRC(a) ((2)*(PI)*(a))

void calc_circulo(float r, float *circunferencia, float *area);
int main(){

    //Declara o português como linguagem padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    float r, circunferencia, area;

    printf("\tLista 3 - Exercício 1\n\n");

    printf("Digite um valor para o raio: ");
    scanf("%f",&r);

    calc_circulo(r,&circunferencia,&area);

    printf("\nA área do círculo de raio %.2f é %.2f",r,area);
    printf("\nA circunferencia do círculo de raio %.2f eh %.2f");

    return 0;
}
void calc_circulo(float r, float *circunferencia, float *area){

    //Uso de Macros para calcular área e circunferência
    *circunferencia = CIRC(r);
    *area = AREA(r);
}