#include <stdio.h>
#include <locale.h>
#define NUM 3

double calcula_media(double notas[NUM]);
int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    double media, notas[NUM];
    register int cnt = 0;

    printf("\tLista 1 - Exerc�cio 4\n\n");

    //Recebe e armazena as notas
    for(cnt = 0; cnt<NUM; cnt++){
        while(1){
            printf("Digite a %d� nota: ", cnt+1);
            scanf("%lf", &notas[cnt]);
            if (notas[cnt] < 0 || notas[cnt] > 10){
                printf("Nota inv�lida, digite uma nota v�lida\n");
            }
            else
                break;
        }

    }

    media = calcula_media(notas);

    //Verifica a situa��o do aluno
    if (media>=6.0)
        printf("Par�bens voc� foi aprovado!\nM�dia Final: %.2lf\n", media);
    else if (media>=4.0 && media<6.0)
        printf("Voc� deve fazer a verifica��o suplementar\nM�dia Final: %.2lf\n", media);
    else
        printf("Voc� foi reprovado\nM�dia Final: %.2lf\n", media);


    return 0;
};

double calcula_media(double notas[NUM]){

    //Calcula e retorna a m�dia

    double x;

    x = (notas[0] + notas[1] + notas[2])/3;


    return (x);
};


