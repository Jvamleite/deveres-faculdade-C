#include <stdio.h>
#include <locale.h>

int sequencia_fib(int x);
int main (){

    //Declara o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    int n;
    register int cnt = 1;

    printf("\tLista 2 - Exerc�cio 2\n\n");

    printf("Digite o n�mero de termos da sequ�ncia de fibonacci que deseja imprimir: ");
    scanf("%d",&n);

    //Imprime os n primeiros termos da sequencia de fibonacci
    printf("Os %d primeiros n�meros da sequ�ncia de fibonacci s�o: ", n);
    for(cnt = 1; cnt<=n; cnt++)
        printf("%d ", sequencia_fib(cnt));
    printf("\n");


    return 0;

};

int sequencia_fib (int x){

    //Usa da recursividade para retornar determinado n termo da sequ�ncia de fibonacci

    if (x == 1)
        return 1;
    else if (x == 2)
        return 1;
    else
        return (sequencia_fib(x-1) + sequencia_fib(x-2));

};
