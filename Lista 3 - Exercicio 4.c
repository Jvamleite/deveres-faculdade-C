#include <stdio.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0


int divs(int x, int *pmi, int *pma);
int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    int n, min , max, resultado;

    printf("\tLista 3 - Exercício 4\n\n");

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    resultado = divs(n,&min,&max);

    if (resultado == TRUE)
        printf("%d é primo!", n);
    else{
        printf("%d não é primo!\n", n);
        printf("%d é seu maior divisor e %d é seu menor divisor.\n", max,min);
    }


};

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
