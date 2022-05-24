#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int mdc (int x, int y);
int main (){

    int num1, num2,MDC;

	//Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite dois numeros inteiros: ");
    scanf(" %d %d",&num1,&num2);

    MDC = mdc(num1,num2);

    DesenhaLinha();
    printf("O MDC entre %d e %d eh %d\n", num1, num2, MDC);

    DesligaPrograma();

	return 0;
};
void DesenhaLinha(){

printf("====================================\n");

}
void DesligaPrograma(){
    DesenhaLinha();
    printf("Fim do Programa. Desligando...");
    sleep(1);
    exit(0);

}

int mdc (int x, int y){

    //Forma recursiva do algoritmo de Euclides

    if (y == 0)
        return x;

    return mdc(y, x % y);
};
