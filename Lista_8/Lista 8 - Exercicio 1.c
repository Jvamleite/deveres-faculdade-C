#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
void BubbleSort(char *v, int n);
int main (){

    char *vetor;
    int n;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista  8 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vetor = (char *) malloc (n*sizeof(char));

    for(cnt = 0; cnt < n; cnt ++){
        printf("Digite o %d elemento: ", cnt+1);
        scanf(" %c",&vetor[cnt]);
    }

    BubbleSort(vetor,n);

    for(cnt = 0; cnt < n; cnt ++)
        printf("%d ", vetor[cnt]);



    



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
void BubbleSort(char *v, int n){

    register int cnt = 0, cnt2 = 0, aux;

    for(cnt = n - 1; cnt > 0; cnt-- ){
        for (cnt2 = 0; cnt2 < cnt; cnt2++ ){
            if (v[cnt2] > v[cnt2+1]){
                aux = v[cnt2];
                v[cnt2] = v[cnt2+1];
                v[cnt2+1] = aux;
            }
        }
    }
}