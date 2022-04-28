#include <stdio.h>
#include <stdlib.h>
#define NUM 3

void DeterminaMaiorMenor(int lista_numeros[NUM], int *pma, int *pme );
void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");

    int listaNumeros[NUM], maior, menor;
    register int cnt = 0;
    float media;

    printf("Digite tres numeros inteiros: ");
    scanf(" %d %d %d",&listaNumeros[0],&listaNumeros[1],&listaNumeros[2]);
    DesenhaLinha();

    DeterminaMaiorMenor(listaNumeros, &maior, &menor);

    printf("\nO maior numero entre %d, %d e %d eh o %d\n", listaNumeros[0], listaNumeros[1], listaNumeros[2], maior);
    printf("O menor numero entre %d, %d e %d eh o %d\n", listaNumeros[0], listaNumeros[1], listaNumeros[2], menor);

    //Determina e imprime quais sao os pares
    printf("Entre %d, %d e %d os pares sao: ", listaNumeros[0],listaNumeros[1],listaNumeros[2]);
    for(cnt = 0; cnt <= 2; cnt++){
        if (listaNumeros[cnt] % 2 == 0)
            printf("%d ", listaNumeros[cnt]);
    };
    printf("\n");

    //Calculo da media
    media = (listaNumeros[0] + listaNumeros[1] + listaNumeros[2])/3;

    printf("A media entre os numeros e %.2f\n", media);

    DesligaPrograma();






};
void DeterminaMaiorMenor(int numeros[NUM], int *pma, int *pme ){

    register int cnt = 1;

    *pma = numeros[0];
    *pme = numeros[0];
    for (cnt = 1; cnt <= 2; cnt++){
    if (numeros[cnt] > *pma)
        *pma = numeros[cnt];
    if (numeros[cnt] < *pme)
        *pme = numeros[cnt];
    };



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
