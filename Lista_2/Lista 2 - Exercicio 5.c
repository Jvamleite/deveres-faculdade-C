#include <stdio.h>
#include <locale.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    int X,Z, soma = 0, quantidadeInteiros = 0;
    register int cnt;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 2 - Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite dois numeros inteiros(X e Z): ");
    scanf("%d %d", &X, &Z);

    //Garante que Z va ser maior que X
    do{
        if (Z<X){
            printf("\nDigite outro valor para Z (Z deve ser maior que X): ");
            scanf("%d",&Z);
        }
    }while(Z<X);

    cnt = X;
    for(cnt = X; soma<Z;cnt++){
        soma += cnt;
        printf("%d + ",cnt);
        quantidadeInteiros++;
    }

    //Formatacao da saida
    printf("\b\b");
    printf("= %d\n",soma);
    printf("Precisamos de %d inteiros\n",quantidadeInteiros);

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
