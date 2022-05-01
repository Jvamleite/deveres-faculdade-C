#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1
#define FALSE 0

void DesenhaLinha();
void DesligaPrograma();
int VerificaChute(int x, int y);
int main (){

    int numeroSorteado, chuteUsuario, resultado, numeroDeTentativas = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    //Iniciando o gerador de numeros aleatarios
    srand(time(NULL));

    //Sorteio do numero pelo programa
    printf("Sorteando Numero...\n");
    sleep(1);
    numeroSorteado = rand() % 100;
    printf("Numero Sorteado!\n");

    //Recebe e verifica se o chute do usuario corresponde ao numero sorteado, se eh menor ou se eh maior
    do{
        printf("Qual eh seu chute?: ");
        scanf(" %d",&chuteUsuario);
        if (chuteUsuario < 0 || chuteUsuario > 100){
            printf("Digite um número válido(0-99)!");
            continue;
        }
        numeroDeTentativas++;
        resultado = VerificaChute(chuteUsuario,numeroSorteado);
    } while (resultado != TRUE);

    DesenhaLinha();
    printf("Parabens voce acertou!!\n");
    printf("Voce precisou de %d chutes para acertar\n", numeroDeTentativas);

    DesligaPrograma();

};

int VerificaChute(int x, int y){

    //Compara o chute do usuario com a letra sorteada usando o codigo ACSII dos dois


    if (x < y){
        printf("Errou! Numero menor que o sorteado, tente novamente\n");
        return FALSE;
    }
    else if (x > y){
        printf("Errou! Numero maior que o sorteado, tente novamente\n");
        return FALSE;
    }
    else
        return TRUE;

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

