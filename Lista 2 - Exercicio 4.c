#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

int verifica_chute(char x, char y);
int main (){

    //Declara o portugu�s como l�ngua padr�o do programa
    setlocale(LC_ALL,"Portuguese");


    char chute_usuario, letra_sorteada;
    int resultado;

    printf("\tLista 2 - Exerc�cio 4\n\n");

    //Iniciando o gerador de n�meros aleat�rios
    srand(time(NULL));

    //Sorteio da letra pelo programa
    printf("Sorteando Letra...\n");
    sleep(1);
    letra_sorteada = (char)((rand()%26)+97);
    printf("Letra Sorteada!\n");

    //Recebe e verifica se o chute do usu�rio corresponde a letra sorteado, se � menor ou se � maior
    do{
        printf("Qual � seu chute?: ");
        scanf("%c",&chute_usuario);
        fflush(stdin);
        resultado = verifica_chute(chute_usuario,letra_sorteada);
    } while (resultado == FALSE);

    printf("Parab�ns voc� acertou!!");












};

int verifica_chute(char x, char y){

    //Compara o chute do usu�rio com a letra sorteada usando o c�digo ACSII dos dois

    if (((int)x) < ((int)y)){
        printf("Errou! Letra menor que a sorteada, tente novamente\n");
        return FALSE;
    }
    else if (((int)x) > ((int)y)){
        printf("Errou! Letra maior que a sorteada, tente novamente\n");
        return FALSE;
    }
    else
        return TRUE;

};
