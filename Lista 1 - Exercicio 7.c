#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma(); 
int main (){

    float numero;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um numero real: ");
    scanf(" %f", &numero);

    //Arredonda para cima e para baixo o valor dado
    DesenhaLinha();
    printf("Arredondando para cima %4f fica %.0f\n", numero, ceil(numero));
    printf("Arredondando para baixo %4f fica %.0f\n", numero, floor(numero));

    DesligaPrograma();

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
