#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main () {

    double salario, bonus = 1, numeroDeHoras, valorDaHora;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    do {
    printf("Digite a quantidade de horas trabalhadas essa semana: ");
    scanf("%lf",&numeroDeHoras);
    if (numeroDeHoras <= 0){
        printf("Digite um valor valido!");
        continue;
    }
    printf("Digite o valor da sua hora: R$ ");
    scanf("%lf", &valorDaHora);
    if (valorDaHora <= 0)
        printf("Digite um valor valido!");
    } while(numeroDeHoras <= 0 || valorDaHora <= 0 );

    //Altera o valor do bonus
    if (numeroDeHoras > 40 && numeroDeHoras <= 60 )
        bonus = 1.5;
    else if (numeroDeHoras > 60)
        bonus = 2;

    salario = (numeroDeHoras * valorDaHora) * bonus;

    DesenhaLinha();
    printf("Seu salario semanal foi de %.2lf R$\n", salario);

    DesligaPrograma();


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

