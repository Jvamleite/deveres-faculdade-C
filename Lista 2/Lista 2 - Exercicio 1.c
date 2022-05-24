#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int VerificaPrimo(int num);
int main (){

    int numero, resultado;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um numero inteiro: ");
    scanf(" %d", &numero);

    if (numero == 1 || numero == 0){
        DesenhaLinha();
        printf("NUMERO NAO PRIMO\n");
    }
    else{
        resultado = VerificaPrimo(numero);

        if (resultado == TRUE){
            DesenhaLinha();
            printf("NUMERO PRIMO\n");
        }
        else{
            DesenhaLinha();
            printf("NUMERO NAO PRIMO\n");
        }
    }

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

int VerificaPrimo(int num){

    //Verifica se um número é primo contando seus divisores

    int divisores = 0;
    register int cnt = 1;

    //Fiquei na duvida na existencia de numeros primos negativos ou não, já que as quando aprendi numeros
    //primos sempre me foi dito que numeros primos são numeros que possuem apenas dois divisores, não atoa
    //usei essa mesmo logica no código abaixo, porém algumas bibliografias que eu consultei apontaram que o 
    //inverso de um número primo tambem é primo, pra contemplar essa definição eu considerei o absoluto do número
    num = abs(num);

    for(cnt = 1; cnt<=num; cnt++){
            if (num % cnt == 0)
                divisores++;
            if (divisores > 2)
                break;
    }
    if (divisores == 2)
        return TRUE;
    else
        return FALSE;
};
