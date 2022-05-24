#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int sequencia_fib(int x);
int main (){

    int n;
    register int cnt = 1;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de termos da sequencia de fibonacci que deseja imprimir: ");
    do {
        scanf(" %d",&n);
        if (n <= 0)
            printf("\nDigite um valor valido!: ");
    } while (n <= 0);

    //Imprime os n primeiros termos da sequencia de fibonacci
    DesenhaLinha();
    printf("Os %d primeiros numeros da sequencia de fibonacci sao: ", n);
    for(cnt = 1; cnt<=n; cnt++)
        printf("%d ", sequencia_fib(cnt));
    printf("\n");

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


int sequencia_fib (int x){

    //Usa da recursividade para retornar determinado n termo da sequ�ncia de fibonacci

    if (x == 1)
        return 1;
    else if (x == 2)
        return 1;
    else
        return (sequencia_fib(x-1) + sequencia_fib(x-2));

}
