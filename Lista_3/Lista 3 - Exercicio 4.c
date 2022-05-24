#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void DesenhaLinha();
void DesligaPrograma();
int divs(int x, int *pmi, int *pma);
int main (){

    int n, min , max, resultado;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um numero inteiro: ");
    scanf(" %d", &n);

    resultado = divs(n,&min,&max);

    if (resultado == TRUE)
        printf("%d eh primo!", n);
    else{
        printf("%d nao eh primo!\n", n);
        printf("%d eh seu maior divisor e %d eh seu menor divisor.\n", max,min);
    }

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

int divs(int x, int *pmi, int *pma){

    register int cnt = 1;
    int div;

    *pma = 1;
    *pmi = x;

    for(cnt = 1; cnt <=x; cnt++){
        if(x%cnt==0){
            div++;
            if (cnt>*pma && cnt != x)
                *pma = cnt;
            if (cnt<*pmi && cnt != 1)
                *pmi = cnt;
        }
    }

    if (div==2)
        return TRUE;
    else
        return FALSE;
};
