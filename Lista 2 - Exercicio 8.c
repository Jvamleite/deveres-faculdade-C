#include <stdio.h>
#include <locale.h>
#define MIN 1000
#define MAX 9999


int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    int primeira_dezena, segunda_dezena, soma_das_dezenas;
    register int cnt = 1000;

    printf("\tLista 2 - Exerc�cio 8\n\n");

    printf("Resultado = ");
    for(cnt = MIN; cnt<=MAX; cnt++){
        primeira_dezena = cnt/100;
        segunda_dezena = cnt%100;
        soma_das_dezenas = primeira_dezena + segunda_dezena;
        if ((soma_das_dezenas*soma_das_dezenas) == cnt )
            printf("%d ", cnt);
    }

};
