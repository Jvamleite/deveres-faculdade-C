#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

	int base, expoente, resultado;

	//Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 11\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um numero inteiro para a base: ");
    scanf("%d", &base);

    printf("\nDigite um numero inteiro para o expoente: ");
    scanf("%d", &expoente);

    resultado = pow(base, expoente);

    DesenhaLinha();
    printf("\n%d^%d = %d\n", base, expoente, resultado);

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