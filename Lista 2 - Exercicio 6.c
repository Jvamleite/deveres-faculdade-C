#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

int verifica_chute(int x, int y);
int main (){

    //Declara o português como língua padrão do programa
    setlocale(LC_ALL,"Portuguese");

    int numero_sorteado, chute_usuario, resultado, numero_de_tentativas = 0;

    printf("\tLista 2 - Exercício 6\n\n");

    //Iniciando o gerador de números aleatórios
    srand(time(NULL));

    //Sorteio do número pelo programa
    printf("Sorteando Número...\n");
    sleep(1);
    numero_sorteado = rand() % 100;
    printf("Número Sorteado!\n");

    //Recebe e verifica se o chute do usuário corresponde ao numero sorteado, se é menor ou se é maior
    do{
        printf("Qual é seu chute?: ");
        scanf("%d",&chute_usuario);
        numero_de_tentativas++;
        resultado = verifica_chute(chute_usuario,numero_sorteado);
    } while (resultado == FALSE);

    printf("Parabéns você acertou!!\n");
    printf("Você precisou de %d chutes para acertar", numero_de_tentativas);












};

int verifica_chute(int x, int y){

    //Compara o chute do usuário com a letra sorteada usando o código ACSII dos dois


    if (x < y){
        printf("Errou! Número menor que o sorteado, tente novamente\n");
        return FALSE;
    }
    else if (x > y){
        printf("Errou! Número maior que o sorteado, tente novamente\n");
        return FALSE;
    }
    else
        return TRUE;

};
