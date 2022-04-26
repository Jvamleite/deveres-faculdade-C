#include <stdio.h>
#include <locale.h>

void DesenhaLinha();
int main (){

    //Determina o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    int total, horas, minutos, segundos, aux;

    printf("\tLista 1 - Exerc�cio 1\n\n");

    //Verifica se o valor � v�lido
    while(1){
        printf("Digite o total de segundos: ");
        scanf("%d",&total);
        if (total < 0)
            printf("Digite um n�mero v�lido!\n");
        else
            break;
    }
    aux = total;

    //Decomp�em o total de segundos em horas, minutos e segundos
    if (total > 60){
        horas = total/3600;
        total -= horas*3600;
        minutos = total/60;
        total -= minutos*60;
    }
    segundos = total;

    DesenhaLinha();

    printf("\n%d segundos � equivalente a: %d Hora(s) %d Minuto(s) %d Segundo(s)\n",aux, horas, minutos, segundos);

    return 0;

};
void DesenhaLinha(){

    printf("====================================================================")

};
