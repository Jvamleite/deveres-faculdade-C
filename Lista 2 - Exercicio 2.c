#include <stdio.h>
#include <locale.h>



int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL, "Portuguese");

    int n, cnt_2 = 1, soma = 0;
    register int cnt = 0;

    printf("\tLista 2 - Exerc�cio 2\n\n");

    printf("Quantos n�meros devem ser somados: ");
    scanf("%d",&n);

    //Soma apenas os n�meros �mpares
    while(cnt!=n){
        if (cnt_2 % 2 != 0){
            soma += cnt_2;
            cnt++;
        }
        cnt_2++;
    }

    printf("\nA soma dos %d primeiros n�meros primos �: %d \n", n, soma);


    return 0;
};
