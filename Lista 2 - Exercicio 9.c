#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void DesenhaLinha();
void DesligaPrograma();
int INVERTE (unsigned int num);
int main (){

	unsigned int numero, numeroInvertido;

	//Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero que deseja inverter: ");
    scanf(" %u",&numero);


    numeroInvertido = INVERTE(numero);

    DesenhaLinha();
    printf("O numero %d invertido fica %d\n", numero, numeroInvertido);

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

int INVERTE(unsigned int num){

    int inv = 0;

    while (num > 0) {
        inv = 10 * inv + num % 10;
        num /= 10;
    }

    return inv;

};
