#include <stdio.h>
#include <stdlib.h>
#define NUM 7

int total_de_notas(int valor);
void DesenhaLinha();
void DesligaPrograma();
int main (){

    int montante;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 8\n");
    DesenhaLinha();
    printf("\n\n");

    do{

    printf("Digite o montante que deseja decompor: ");
    scanf(" %d",&montante);

    if (montante == 0)
        printf("Nao preciso de nenhuma cedula\n");
    else if (montante > 0)
        total_de_notas(montante);
    else
        printf("Digite um valor valido!\n");
    } while (montante < 0);

    DesligaPrograma();

    return 0;

};

int total_de_notas(int valor){

    // Recebe um valor e imprime a quantidade de notas de 50, 20, 10 e etc que formam esse valor

    int quantidadeNotas[NUM], resto;
    int cedulas[NUM] = {100,50,20,10,5,2,1};
    register int cnt = 0;

    resto = valor;

    printf("\nQuantidade minima de notas necesserias para compor %d: \n", valor);

    for(cnt = 0; cnt<NUM; cnt++){
        quantidadeNotas[cnt] = resto/cedulas[cnt];
        resto -= (quantidadeNotas[cnt]*cedulas[cnt]);
        printf("%d notas de %d\n", quantidadeNotas[cnt], cedulas[cnt]);
    }

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

