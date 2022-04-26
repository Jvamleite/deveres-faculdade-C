#include <stdio.h>
#include <locale.h>

int mdc (int x, int y);
int main (){

	//Declara o portugu�s como lingua padr�o pro programa
	setlocale(LC_ALL,"Portuguese");

    int num1, num2,MDC;

	printf("\tLista 2 - Exerc�cio 10\n\n");

    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d",&num1,&num2);

    MDC = mdc(num1,num2);

    printf("O MDC entre %d e %d � %d", num1, num2, MDC);

	return 0;
};


int mdc (int x, int y){

    //Forma recursiva do algoritmo de Euclides

    if (y == 0)
        return x;

    return mdc(y, x % y);
};
