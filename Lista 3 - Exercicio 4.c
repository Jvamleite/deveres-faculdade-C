#include <stdio.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0


int divs(int x, int *pmi, int *pma);
int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    int n, min , max, resultado;

    printf("\tLista 3 - Exerc�cio 4\n\n");

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);

    resultado = divs(n,&min,&max);

    if (resultado == TRUE)
        printf("%d � primo!", n);
    else{
        printf("%d n�o � primo!\n", n);
        printf("%d � seu maior divisor e %d � seu menor divisor.\n", max,min);
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
