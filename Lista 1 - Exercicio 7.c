#include <stdio.h>
#include <locale.h>
#include <math.h>


int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    float numero;

    printf("\tLista 1 - Exercício 7\n\n");

    printf("Digite um número real: ");
    scanf("%f", &numero);

    //Arredonda para cima e para baixo o valor dado
    printf("\nArredondando para cima %4f fica %.0f\n", numero, ceil(numero));
    printf("Arredondando para baixo %4f fica %.0f\n", numero, floor(numero));

};
