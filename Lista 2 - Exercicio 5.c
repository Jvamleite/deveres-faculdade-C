#include <stdio.h>
#include <locale.h>

int main (){

    //Determina o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    int X,Z, soma = 0, quantidade_inteiros = 0;
    register int cnt;

    printf("\tLista 2 - Exerc�cio 5\n\n");

    printf("Digite dois n�meros inteiros(X e Z): ");
    scanf("%d %d", &X, &Z);

    //Garante que Z v� ser maior que X
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
        quantidade_inteiros++;
    }

    //Formata��o da sa�da
    printf("\b\b");
    printf("= %d\n",soma);
    printf("Precisamos de %d inteiros",quantidade_inteiros);

    return 0;

};
