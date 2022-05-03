#include<stdio.h>
#include<stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int idade, quantidadeMulheres = 0, quantidadeHomens = 0, numeroDePessoas;
    char sexo;
    float altura;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 11\n");
    DesenhaLinha();
    printf("\n\n");

    scanf(" %d",&numeroDePessoas);

    for (cnt = 0; cnt < numeroDePessoas; cnt++){
        scanf(" %c",&sexo);
        scanf(" %d",&idade);
        if ((idade >= 20 && idade <= 35) && sexo == 'F')
            quantidadeMulheres++;
        scanf(" %f",&altura);
        if ((altura > 1.8) && sexo == 'M')
            quantidadeHomens++;
        fflush(stdin);
    }

    printf("%d %d", quantidadeHomens, quantidadeMulheres);



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
