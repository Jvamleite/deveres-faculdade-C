#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
#define MAXT 100

void DesenhaLinha();
void DesligaPrograma();
int main (){


    char nomes[MAXT][MAX];
    int *tamanhoDosNomes, numeroDeNomes, somaTamanhos = 0;
    register int cnt = -1, cnt2 = 0;
    float media, variancia = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista  - Exercicio \n");
    DesenhaLinha();
    printf("\n\n");

    //Mais uma vez o debug simplesmente parou em uma linha não saiu dela, não me mostrou pq e simplesmente não sei pq da errado o programa


    do{
        cnt++;
        printf("Digite o %d nome: ",cnt+1);
        scanf(" %[^\n]", &nomes[cnt]);
        fflush(stdin);
    } while(strcmp(nomes[cnt],"fim") != 0);

    numeroDeNomes = cnt+1;

    tamanhoDosNomes = (int *) malloc (numeroDeNomes*sizeof(int));

    for(cnt = 0; cnt < numeroDeNomes; cnt++){
        tamanhoDosNomes[cnt] = 0;
        for(cnt2 = 0; cnt2 < MAX; cnt2++){
            if(nomes[cnt][cnt] == '\0')
                break;
            if(nomes[cnt][cnt] == ' ')
                continue;
            tamanhoDosNomes[cnt] += 1;       
        }
        somaTamanhos += tamanhoDosNomes[cnt];
    }
    
    media = somaTamanhos/numeroDeNomes;
    printf("A media do tamanho dos nomes eh: %.2f\n",media);

    for(cnt = 0; cnt < numeroDeNomes; cnt++)
        variancia += (tamanhoDosNomes[cnt]-media)*(tamanhoDosNomes[cnt]-media);
    
    variancia /= (float) numeroDeNomes;
    printf("A variancia do tamanho dos nomes eh: %.2f\n",variancia);

    free(tamanhoDosNomes);
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
