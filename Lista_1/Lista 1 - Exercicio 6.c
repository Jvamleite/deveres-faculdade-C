#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define CALCULADELTA(a,b,c) (((b)*(b)) - (4*(a)*(c)))

void calcula_raizes(float a, float b, float c);
void DesenhaLinha();
void DesligaPrograma();
int main (){

    float a, b, c, delta;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite os coeficientes da equacao: \n\n");
    printf("a: ");
    do{
        scanf(" %f",&a);
        if (a == 0)
            printf("Digite um valor válido para a!: ");
    } while (a==0);
    printf("b: ");
    scanf(" %f",&b);
    printf("c: ");
    scanf(" %f",&c);

    DesenhaLinha();
    calcula_raizes(a,b,c);

    DesligaPrograma();

    return 0;
};

void calcula_raizes(float a, float b, float c){

    float delta, x1, x2;

    delta = CALCULADELTA(a,b,c);

    if (delta < 0)
        printf("A equacao nao possui raizes reais\n");
    else if (delta == 0){
        x1 = (-1*(b))/(2*a);
        printf("A unica raiz real dessa equacao eh: %f\n", x1);
    }
    else{
        x1 = ((-1*b) + sqrt(delta))/(2*a);
        x2 = ((-1*b) - sqrt(delta))/(2*a);
        printf("As duas raizes reais da equacao sao %2.2f e %2.2f\n", x1, x2);
    }
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


