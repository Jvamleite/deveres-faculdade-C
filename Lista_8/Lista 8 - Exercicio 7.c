#include <stdio.h>
#include <stdlib.h>
#define C 5
#define D 5

void DesenhaLinha();
void DesligaPrograma();
int main (){

    int cidades[C][D] = {{0,15,30,5,12},{15,0,10,17,28},{30,10,0,3,11},{5,17,3,0,80},{12,28,11,80,0}}, cidade1, cidade2, distanciaTotal = 0, numeroDeCidades, *percurso;
    register int cnt = 0, cnt2 = 0, cnt3 = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 8- Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    while(1){
        printf("Use 0 para ambas a cidades para sair\n");
        sleep(1);
        printf("Digite a primeira cidade: ");
        scanf("%d",&cidade1);
        printf("Digite a segunda cidade: ");
        scanf("%d",&cidade2);
        if(cidade1 == 0 &&  cidade2 == 0)
            break;
        printf("A distancia da primeira cidade escolhida para a segunda cidade eh: %d\n",cidades[cidade1-1][cidade2-1]);
    }
    
    for(cnt = 0; cnt < C;cnt++){
        for(cnt2 = 0+cnt3; cnt2 < D; cnt2++){
            printf("Ditancia da cidade %d para a cidade %d eh: %d\n",cnt+1,cnt2+1,cidades[cnt][cnt2]);
        }
        cnt3++;
    }

    printf("Digite quantas cidades tem seu percurso: ");
    scanf("%d",&numeroDeCidades);

    percurso = (int *) malloc (numeroDeCidades*sizeof(int));

    for(cnt = 0; cnt < numeroDeCidades; cnt++)
    {
        scanf("%d",&cidade2);
        percurso[cnt] = cidade2;
    }

    for(cnt = 1; cnt < numeroDeCidades; cnt++){
        distanciaTotal += cidades[percurso[cnt]-1][percurso[cnt-1]-1];
    }
   
    printf("A distancia total do percuso eh de: %d\n",distanciaTotal);


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
