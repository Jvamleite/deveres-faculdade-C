#include <stdio.h>
#include <locale.h>

int sequencia_fib(int x);
int main (){

    //Declara o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    int n;
    register int cnt = 1;

    printf("\tLista 2 - Exercício 2\n\n");

    printf("Digite o número de termos da sequência de fibonacci que deseja imprimir: ");
    scanf("%d",&n);

    //Imprime os n primeiros termos da sequencia de fibonacci
    printf("Os %d primeiros números da sequência de fibonacci são: ", n);
    for(cnt = 1; cnt<=n; cnt++)
        printf("%d ", sequencia_fib(cnt));
    printf("\n");


    return 0;

};

int sequencia_fib (int x){

    //Usa da recursividade para retornar determinado n termo da sequência de fibonacci

    if (x == 1)
        return 1;
    else if (x == 2)
        return 1;
    else
        return (sequencia_fib(x-1) + sequencia_fib(x-2));

};
