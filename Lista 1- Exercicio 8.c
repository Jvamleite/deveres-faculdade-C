#include <stdio.h>
#include <locale.h>
#define NUM 7

int total_de_notas(int valor);
int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL, "Portuguese");

    int montante;

    printf("\tLista 1 - Exerc�cio 8\n\n");

    do{

    printf("Digite o montante que deseja decompor: ");
    scanf("%d",&montante);

    if (montante == 0)
        printf("N�o preciso de nenhuma c�dula\n");
    else if (montante > 0)
        total_de_notas(montante);
    else
        printf("Digite um valor v�lido!\n");
    } while (montante < 0);

    return 0;

};

int total_de_notas(int valor){

    // Recebe um valor e imprime a quantidade de notas de 50, 20, 10 e etc que formam esse valor

    int quantidade_notas[NUM], resto;
    int cedulas[NUM] = {100,50,20,10,5,2,1};
    register int cnt = 0;

    resto = valor;

    printf("\nQuantidade m�nima de notas necess�rias para compor %d: \n", valor);

    for(cnt = 0; cnt<NUM; cnt++){
        quantidade_notas[cnt] = resto/cedulas[cnt];
        resto -= (quantidade_notas[cnt]*cedulas[cnt]);
        printf("%d notas de %d\n", quantidade_notas[cnt], cedulas[cnt]);
    }





};
