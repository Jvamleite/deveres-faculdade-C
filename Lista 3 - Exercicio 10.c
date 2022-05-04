#include<stdio.h>
#include<stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
float media(int n, float *v);
int main (){


    float *listaNotas, mediaNotas;
    int numeroDeNotas;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 10\n");
    DesenhaLinha();
    printf("\n\n");

    do{
        printf("Digite o numero de notas: ");
        scanf("%d",&numeroDeNotas);
        if (numeroDeNotas < 0)
            printf("Digite um numero valido!\n");
    } while (numeroDeNotas < 0);

    listaNotas = (float *) malloc (numeroDeNotas*sizeof(float));

    mediaNotas = media(numeroDeNotas,listaNotas);

    DesenhaLinha();
    printf("A media das notas digitadas eh: %.2f\n", mediaNotas);

    DesligaPrograma();
    
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
float media(int n, float *v){

    register int cnt = 0;
    float somaNotas = 0, media;

    for (cnt = 0; cnt < n; cnt++ ){
        do{
            printf("Digite a %d nota: ", cnt+1);
            scanf("%f",&v[cnt]);
            if (v[cnt] > 10 || v[cnt] < 0)
                printf("Digite uma nota valida!\n");
        } while (v[cnt] > 10 || v[cnt] < 0);
        somaNotas += v[cnt];
    }

    media = somaNotas/n;

    return media;

}
