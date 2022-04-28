#include <stdio.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    int total, horas, minutos, segundos, aux;

    //Titulo do programa
    DesenhaLinha();
    printf("\t\t\tLista 1 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    //Verifica se o valor é válido
    while(1){
        printf("\n\nDigite o total de segundos: ");
        scanf(" %d",&total);
        if (total < 0)
            printf("Digite um numero valido!\n");
        else
            break;
    }
    aux = total;

    //Decompoem o total de segundos em horas, minutos e segundos
    if (total > 60){
        horas = total/3600;
        total -= horas*3600;
        minutos = total/60;
        total -= minutos*60;
    }
    segundos = total;

    DesenhaLinha();

    printf("%d segundos eh equivalente a: %d Hora(s) %d Minuto(s) %d Segundo(s)\n",aux, horas, minutos, segundos);

    DesenhaLinha();

    DesligaPrograma();

    return 0;

};
void DesenhaLinha(){

    printf("===================================================================\n");

}
void DesligaPrograma(){
    DesenhaLinha();
    printf("Fim do Programa. Desligando...");
    sleep(1);
    exit(0);

}
