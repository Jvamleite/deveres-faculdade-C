#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){


    int *vetor, *p1, *p2, n;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 8\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    srand(time(NULL));

    for(cnt = 0; cnt < n; cnt++)
        vetor[cnt] = rand();

    p1 = &vetor[n-1];
    p2 = &vetor[0];
    
    for(cnt = 0; cnt < n; cnt++){
        printf("%d       %d\n",*(p1-cnt), *(p2+cnt));
        sleep(1);
        if(*(p1-cnt)==*(p2+cnt)){
            DesenhaLinha();
            printf("Vetores se encontraram!\n");
            break;
        }
    }



   



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
