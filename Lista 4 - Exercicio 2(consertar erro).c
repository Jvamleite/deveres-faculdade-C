#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXR 5
#define MAXS 10


void DesenhaLinha();
void DesligaPrograma();
void PreencheVetoresComInteiros(int *R, int *S);
void PreencheVetoresComZeros(int *X, int *rep);
int main (){

    int R[MAXR], S[MAXS], X[MAXR];
    int repeticoes[MAXR+MAXS];
    register int cnt = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0,cnt5 = 0, aux = 0;
    //register int cnt = 0, cnt2 = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");

    PreencheVetoresComInteiros(R,S);
    PreencheVetoresComZeros(X,repeticoes);

    for(cnt = 0; cnt < MAXR; cnt++){
        for (cnt2 = 0; cnt2<MAXS; cnt2++){
            aux = 0;
            if (R[cnt] == S[cnt2]){
                //Esse if é só para armazenar a primeira repetição direto no vetor repeticões
                if (cnt4 == 0){
                    repeticoes[cnt5] = R[cnt];
                    cnt5++;
                    X[cnt4] = R[cnt];
                    cnt4++;
                    continue;
                }
                repeticoes[cnt5] = R[cnt];
                cnt5++;
                for(cnt3 = 0; cnt3 < MAXR; cnt3++){
                    //Se essa repetição já foi identificada não armazena no vetor
                    if(R[cnt] == repeticoes[cnt3]){
                        aux++;
                    }
                }
                if (aux == 1){
                    X[cnt4] = R[cnt];
                    cnt4++;
                }
            }
        }
    }
    printf("Vetor R: ");
    for(cnt = 0; cnt < MAXR; cnt++)
        printf("%d ",R[cnt]);
    printf("\n");

    printf("Vetor S: ");
    for(cnt = 0; cnt < MAXS; cnt++)
        printf("%d ",S[cnt]);
    printf("\n");

    printf("Vetor X: ");
    for(cnt = 0; cnt < cnt4; cnt++)
        printf("%d ",X[cnt]);
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
void PreencheVetoresComInteiros(int *R, int *S){

    register int cnt = 0;

    srand(time(NULL));

    for (cnt = 0; cnt < MAXR; cnt++)
        R[cnt] =  (rand()%10)+1;
    cnt = 0;
    for (cnt = 0; cnt < MAXS; cnt++)
        S[cnt] =  (rand()%10)+1;

}
void PreencheVetoresComZeros(int *X, int *rep){

    register int cnt = 0;

    for (cnt = 0; cnt < MAXR; cnt++){
        X[cnt] =  0;
    }

    for (cnt = 0; cnt < MAXR+MAXS; cnt++){
        rep[cnt] = 0;
    }


}
