#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void DesenhaLinha();
void DesligaPrograma();
float CalculoVariancia(int *idades, float media, int Np);
int main (){


    int *listaIdade, quantidadeMulheres = 0, quantidadeHomens = 0, numeroDePessoas, somaIdades = 0;
    char sexo;
    float altura, mediaIdades, varianciaIdades;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 11\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o número de pessoas: ");
    scanf(" %d",&numeroDePessoas);

    listaIdade = (int *) malloc (numeroDePessoas*sizeof(int));

    for (cnt = 0; cnt < numeroDePessoas; cnt++){
        printf("\nDigite o sexo da pessoa: ");
        scanf(" %c",&sexo);
        do {
        printf("Digite a idade da pessoa: ");
        scanf(" %d",&listaIdade[cnt]);
            if (listaIdade[cnt] > 120 || listaIdade[cnt] < 1)
                printf("Digite uma idade valida!\n");
        } while (listaIdade[cnt] > 120 || listaIdade[cnt] < 1);
        somaIdades += listaIdade[cnt];
        if ((listaIdade[cnt] >= 20 && listaIdade[cnt] <= 35) && sexo == 'F')
            quantidadeMulheres++;
        do {
            printf("Digite a altura da pessoa: ");
            scanf(" %f",&altura);
            if (altura <= 1.40 || altura >= 2.20)
                printf("Digite uma altura valida!\n");
        } while(altura <= 1.40 || altura >= 2.20);
            if ((altura > 1.8) && sexo == 'M')
                quantidadeHomens++;
        fflush(stdin);
    }

    mediaIdades = somaIdades/numeroDePessoas;
    varianciaIdades = CalculoVariancia(listaIdade,mediaIdades,numeroDePessoas);

    printf("A quantidade de homens maiores que 1.8 eh: %d\n", quantidadeHomens);
    printf("A quantidade de mulheres com idade entre 20 e 35 eh: %d\n", quantidadeMulheres);
    printf("A variancia das idades eh: %f",varianciaIdades);

    return 0;
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
float CalculoVariancia(int *idades, float media, int Np){

    register int cnt = 0;
    float variancia, somatorio = 0;

    for(cnt = 0; cnt < Np; cnt++){
        somatorio += pow((idades[cnt]-media),2);
    }
    variancia = somatorio/Np;

    return variancia;
}
