#include <stdio.h>
#include <locale.h>



int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL, "Portuguese");

    int n, cnt_2 = 1, soma = 0;
    register int cnt = 0;

    printf("\tLista 2 - Exercício 2\n\n");

    printf("Quantos números devem ser somados: ");
    scanf("%d",&n);

    //Soma apenas os números ímpares
    while(cnt!=n){
        if (cnt_2 % 2 != 0){
            soma += cnt_2;
            cnt++;
        }
        cnt_2++;
    }

    printf("\nA soma dos %d primeiros números primos é: %d \n", n, soma);


    return 0;
};
