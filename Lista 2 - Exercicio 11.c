#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){

	//Declara o português como lingua padrão pro programa
	setlocale(LC_ALL,"Portuguese");

	int base, expoente, resultado;

	printf("\tLista 2 - Exercício 11\n\n");

    printf("Digite um número inteiro para a base: ");
    scanf("%d", &base);

    printf("\nDigite um número inteiro para o expoente: ");
    scanf("%d", &expoente);

    resultado = pow(base, expoente);

    printf("\n%d^%d = %d", base, expoente, resultado);











	return 0;
}
