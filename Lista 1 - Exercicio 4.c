#include <stdio.h>
#include <locale.h>
#define NUM 3

double calcula_media(double notas[NUM]);
int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    double media, notas[NUM];
    register int cnt = 0;

    printf("\tLista 1 - Exercício 4\n\n");

    //Recebe e armazena as notas
    for(cnt = 0; cnt<NUM; cnt++){
        while(1){
            printf("Digite a %d° nota: ", cnt+1);
            scanf("%lf", &notas[cnt]);
            if (notas[cnt] < 0 || notas[cnt] > 10){
                printf("Nota inválida, digite uma nota válida\n");
            }
            else
                break;
        }

    }

    media = calcula_media(notas);

    //Verifica a situação do aluno
    if (media>=6.0)
        printf("Parábens você foi aprovado!\nMédia Final: %.2lf\n", media);
    else if (media>=4.0 && media<6.0)
        printf("Você deve fazer a verificação suplementar\nMédia Final: %.2lf\n", media);
    else
        printf("Você foi reprovado\nMédia Final: %.2lf\n", media);


    return 0;
};

double calcula_media(double notas[NUM]){

    //Calcula e retorna a média

    double x;

    x = (notas[0] + notas[1] + notas[2])/3;


    return (x);
};


