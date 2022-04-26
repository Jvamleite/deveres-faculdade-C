#include <stdio.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0

int verifica_se_e_primo(int num);
int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    int numero, resultado;

    printf("\tLista 2 - Exercício 1\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero == 1)
        printf("NUMERO NAO PRIMO");
    else{
        resultado = verifica_se_e_primo(numero);

        if (resultado == TRUE)
            printf("NUMERO PRIMO");
        else
            printf("NUMERO NAO PRIMO");
    }

    return 0;

};

int verifica_se_e_primo(int num){

    int divisores = 0;
    register int cnt = 1;

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
