#include <stdio.h>
#include <locale.h>
#include <math.h>

int INVERTE (unsigned int num);
int main (){

	//Declara o portugu�s como lingua padr�o pro programa
	setlocale(LC_ALL,"Portuguese");

	unsigned int numero, numero_invertido;

	printf("\tLista 2 - Exerc�cio 9\n\n");

    printf("Digite o n�mero que deseja inverter: ");
    scanf("%u",&numero);


    numero_invertido = INVERTE(numero);

    printf("O n�mero %d invertido fica %d", numero, numero_invertido);









	return 0;
};

int INVERTE(unsigned int num){

    int inv = 0;

    while (num > 0) {
        inv = 10 * inv + num % 10;
        num /= 10;
    }

    return inv;

};
