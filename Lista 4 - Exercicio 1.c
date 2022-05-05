#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void DesenhaLinha();
void DesligaPrograma();
int main (){



    int X[MAX], Y[MAX];
    register int cnt = 0, cnt2 = 9;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");
    
    for (cnt = 0; cnt < MAX; cnt++){
        printf("Digite o %d elemento do vetor: ",cnt+1);
        scanf("%d",&X[cnt]);
        Y[cnt+cnt2] = X[cnt];
        cnt2 -= 2;
    }

    printf("Vetor Y: ");
    for(cnt = 0; cnt < MAX; cnt++){
        printf("%d ",Y[cnt]);
    }
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