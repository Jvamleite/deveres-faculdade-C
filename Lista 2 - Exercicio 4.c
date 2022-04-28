#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

void DesenhaLinha();
void DesligaPrograma();
int VerificaChute(char x, char y);
int main (){

    char chuteUsuario, letraSorteada;
    int resultado;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    //Iniciando o gerador de numeros aleatorios
    srand(time(NULL));

    //Sorteio da letra pelo programa
    printf("Sorteando Letra...\n");
    sleep(1);
    letraSorteada = (char)((rand()%26)+97);
    printf("Letra Sorteada!\n");

    //Recebe e verifica se o chute do usuario corresponde a letra sorteado, se eh menor ou se eh maior
    do{
        printf("Qual eh seu chute?: ");
        scanf(" %c",&chuteUsuario);
        chuteUsuario = tolower(chuteUsuario);
        fflush(stdin);
        resultado = VerificaChute(chuteUsuario,letraSorteada);
    } while (resultado == FALSE);

    DesenhaLinha();
    printf("   Parabens voce acertou!!\n");

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

int VerificaChute(char x, char y){

    //Compara o chute do usuario com a letra sorteada usando o c�digo ACSII dos dois

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
