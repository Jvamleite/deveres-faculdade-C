#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int *listaIdade, quantidadeMulheres = 0, quantidadeHomens = 0, numeroDePessoas, somaIdades = 0;
    char sexo;
    float altura, mediaIdades, somatorio = 0, varianciaIdades;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 11\n");
    DesenhaLinha();
    printf("\n\n");

    scanf(" %d",&numeroDePessoas);

    listaIdade = (int *) malloc (numeroDePessoas*sizeof(int));

    for (cnt = 0; cnt < numeroDePessoas; cnt++){
        scanf(" %c",&sexo);
        scanf(" %d",&listaIdade[cnt]);
        somaIdades += listaIdade[cnt];
        if ((listaIdade[cnt] >= 20 && listaIdade[cnt] <= 35) && sexo == 'F')
            quantidadeMulheres++;
        scanf(" %f",&altura);
        if ((altura > 1.8) && sexo == 'M')
            quantidadeHomens++;
        fflush(stdin);
    }

    mediaIdades = somaIdades/numeroDePessoas;
    cnt = 0;
    for(cnt = 0; cnt < numeroDePessoas; cnt++){
        somatorio += pow((listaIdade[cnt]-mediaIdades),2);
    }

    varianciaIdades = somatorio/numeroDePessoas;

    printf("%d %d", quantidadeHomens, quantidadeMulheres);

    printf("%f",varianciaIdades);



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
