#include <stdio.h>
#include <locale.h>
#define NUM 3

void DeterminaMaiorMenor(int lista_numeros[NUM], int *pma, int *pme );
int main (){

    //Determina o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Título do programa
    printf("\tLista 1 - Exercício 2\n\n");

    int lista_numeros[NUM], maior, menor;
    int register cnt = 0;
    float media;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d",&lista_numeros[0],&lista_numeros[1],&lista_numeros[2]);


    DeterminaMaiorMenor(lista_numeros, &maior, &menor);


    printf("\nO maior número entre %d, %d e %d é o %d\n", lista_numeros[0], lista_numeros[1], lista_numeros[2], maior);
    printf("O menor número entre %d, %d e %d é o %d\n", lista_numeros[0], lista_numeros[1], lista_numeros[2], menor);

    //Determina e imprime quais são os pares
    printf("Entre %d, %d e %d os pares são: ", lista_numeros[0],lista_numeros[1],lista_numeros[2]);
    for(cnt = 0; cnt <= 2; cnt++){
        if (lista_numeros[cnt] % 2 == 0)
            printf("%d ", lista_numeros[cnt]);
    };
    printf("\n");

    //Cálculo da média
    media = (lista_numeros[0] + lista_numeros[1] + lista_numeros[2])/3;

    printf("A média entre os números é %.2f", media);









};
void DeterminaMaiorMenor(int lista_numeros[NUM], int *pma, int *pme ){

    register int cnt = 1;

    *pma = lista_numeros[0];
    *pme = lista_numeros[0];
    for (cnt = 1; cnt <= 2; cnt++){
    if (lista_numeros[cnt] > *pma)
        *pma = lista_numeros[cnt];
    if (lista_numeros[cnt] < *pme)
        *pme = lista_numeros[cnt];
    };



}
