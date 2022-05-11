#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){


    int *vet, numeroDeElementos, vindoDaEsquerda, vindoDaDireita;
    register int cnt = 0, cnt2;

    scanf("%d",&numeroDeElementos);

    vet = (int *) malloc (numeroDeElementos*sizeof(int));


    srand(time(NULL));

    for(cnt = 0; cnt<numeroDeElementos; cnt++){
        vet[cnt] = (rand()%100)+1;
    }

    cnt2 = numeroDeElementos-1;
    for(cnt = 0; cnt< numeroDeElementos; cnt++){
        printf("%d   %d\n",vet[cnt],vet[cnt+cnt2]);
        cnt2-=2;
        if (vet[cnt] == vet[cnt2]){
            printf("Os ponteiros se encontraram!");
            break;
        }
    }


    return 0;

};
