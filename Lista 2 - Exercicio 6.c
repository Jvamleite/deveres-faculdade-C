#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

int verifica_chute(int x, int y);
int main (){

    //Declara o portugu�s como l�ngua padr�o do programa
    setlocale(LC_ALL,"Portuguese");

    int numero_sorteado, chute_usuario, resultado, numero_de_tentativas = 0;

    printf("\tLista 2 - Exerc�cio 6\n\n");

    //Iniciando o gerador de n�meros aleat�rios
    srand(time(NULL));

    //Sorteio do n�mero pelo programa
    printf("Sorteando N�mero...\n");
    sleep(1);
    numero_sorteado = rand() % 100;
    printf("N�mero Sorteado!\n");

    //Recebe e verifica se o chute do usu�rio corresponde ao numero sorteado, se � menor ou se � maior
    do{
        printf("Qual � seu chute?: ");
        scanf("%d",&chute_usuario);
        numero_de_tentativas++;
        resultado = verifica_chute(chute_usuario,numero_sorteado);
    } while (resultado == FALSE);

    printf("Parab�ns voc� acertou!!\n");
    printf("Voc� precisou de %d chutes para acertar", numero_de_tentativas);












};

int verifica_chute(int x, int y){

    //Compara o chute do usu�rio com a letra sorteada usando o c�digo ACSII dos dois


    if (x < y){
        printf("Errou! N�mero menor que o sorteado, tente novamente\n");
        return FALSE;
    }
    else if (x > y){
        printf("Errou! N�mero maior que o sorteado, tente novamente\n");
        return FALSE;
    }
    else
        return TRUE;

};
