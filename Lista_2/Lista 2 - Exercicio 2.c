#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, cnt_2 = 1, soma = 0;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Quantos numeros devem ser somados: ");
    do {
        scanf(" %d",&n);
        if (n <= 0)
            printf("\nDigite um valor valido!: ");
    } while (n <= 0);

    //Soma apenas os numeros impares
    while(cnt!=n){
        if (cnt_2 % 2 != 0){
            soma += cnt_2;
            cnt++;
        }
        cnt_2++;
    }

    DesenhaLinha();
    printf("A soma dos %d primeiros numeros primos eh: %d \n", n, soma);

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
