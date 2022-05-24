#include <stdio.h>
#include <stdlib.h>
#define NUM 3

double calcula_media(double notas[NUM]);
void DesenhaLinha();
void DesligaPrograma();
int main (){

    double media, notas[NUM];
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    //Recebe e armazena as notas
    for(cnt = 0; cnt<NUM; cnt++){
        while(1){
            printf("Digite a %dª nota: ", cnt+1);
            scanf(" %lf", &notas[cnt]);
            if (notas[cnt] < 0 || notas[cnt] > 10){
                printf("Nota invalida, digite uma nota valida\n");
            }
            else
                break;
        }

    }

    media = calcula_media(notas);

    DesenhaLinha();
    //Verifica a situacao do aluno
    if (media>=6.0)
        printf("Parabens voce foi aprovado!\nMedia Final: %.2lf\n", media);
    else if (media>=4.0 && media<6.0)
        printf("Voce deve fazer a verificacao suplementar\nMedia Final: %.2lf\n", media);
    else
        printf("Voce foi reprovado\nMedia Final: %.2lf\n", media);

    DesligaPrograma();

    return 0;
};

double calcula_media(double notas[NUM]){
    double x;

    x = (notas[0] + notas[1] + notas[2])/3;


    return (x);
};
void DesenhaLinha(){

printf("====================================\n");

};
void DesligaPrograma(){
    DesenhaLinha();
    printf("Fim do Programa. Desligando...");
    sleep(1);
    exit(0);

}


