#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

int verifica_chute(char x, char y);
int main (){

    //Declara o português como língua padrão do programa
    setlocale(LC_ALL,"Portuguese");


    char chute_usuario, letra_sorteada;
    int resultado;

    printf("\tLista 2 - Exercício 4\n\n");

    //Iniciando o gerador de números aleatórios
    srand(time(NULL));

    //Sorteio da letra pelo programa
    printf("Sorteando Letra...\n");
    sleep(1);
    letra_sorteada = (char)((rand()%26)+97);
    printf("Letra Sorteada!\n");

    //Recebe e verifica se o chute do usuário corresponde a letra sorteado, se é menor ou se é maior
    do{
        printf("Qual é seu chute?: ");
        scanf("%c",&chute_usuario);
        fflush(stdin);
        resultado = verifica_chute(chute_usuario,letra_sorteada);
    } while (resultado == FALSE);

    printf("Parabéns você acertou!!");












};

int verifica_chute(char x, char y){

    //Compara o chute do usuário com a letra sorteada usando o código ACSII dos dois

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
