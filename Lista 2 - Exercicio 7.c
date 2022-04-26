#include <stdio.h>
#include <locale.h>

int main () {

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    double salario, bonus = 1, numero_de_horas, valor_da_hora;

    printf("\tLista 2 - Exercício 7\n\n");


    printf("Digite a quantidade de horas trabalhadas essa semana: ");
    scanf("%lf",&numero_de_horas);
    printf("Digite o valor da sua hora: R$ ");
    scanf("%lf", &valor_da_hora);

    //Altera o valor do bonus
    if (numero_de_horas > 40 && numero_de_horas <= 60 )
        bonus = 1.5;
    else if (numero_de_horas > 60)
        bonus = 2;

    salario = (numero_de_horas * valor_da_hora) * bonus;

    printf("Seu salário semanal foi de %.2lf R$", salario);





};
