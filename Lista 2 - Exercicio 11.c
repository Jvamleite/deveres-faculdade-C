#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){

	//Declara o portugu�s como lingua padr�o pro programa
	setlocale(LC_ALL,"Portuguese");

	int base, expoente, resultado;

	printf("\tLista 2 - Exerc�cio 11\n\n");

    printf("Digite um n�mero inteiro para a base: ");
    scanf("%d", &base);

    printf("\nDigite um n�mero inteiro para o expoente: ");
    scanf("%d", &expoente);

    resultado = pow(base, expoente);

    printf("\n%d^%d = %d", base, expoente, resultado);











	return 0;
}
