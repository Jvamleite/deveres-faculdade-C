#include <stdio.h>
#include <locale.h>
#include <math.h>
#define calcula_delta(a,b,c) (((b)*(b)) - (4*(a)*(c)))

void calcula_raizes(float a, float b, float c);
int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    float a, b, c, delta;

    printf("\tLista 1 - Exerc�cio 6\n\n");

    printf("Digite os coeficientes da equa��o: \n\n");
    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);

    calcula_raizes(a,b,c);

    return 0;
};

void calcula_raizes(float a, float b, float c){

    float delta, x1, x2;

    delta = calcula_delta(a,b,c);

    if (delta < 0)
        printf("A equa��o n�o possui raizes reais\n");
    else if (delta == 0){
        x1 = (-1*(b))/(2*a);
        printf("A �nica raiz real dessa equa��o �: %f\n", x1);
    }
    else{
        x1 = ((-1*b) + sqrt(delta))/(2*a);
        x2 = ((-1*b) - sqrt(delta))/(2*a);
        printf("As duas ra�zes reais da equa��o s�o %2.2f e %2.2f\n", x1, x2);
    }
};


