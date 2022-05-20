#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam);
int main (){

    int n, *inscr, p1, p2, *tam, *p;
    float *t1, *t2;
    register int cnt = 0;
    
    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 6 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    //Professor sinceramente, tem umas questões que eu desisto, eu rodo não funciona, eu jogo no debugger
    //e o debugger não acha o erro, ele só para, do nada, nem me diz pq parou, e isso eu tive em várias questões
    //ai fica dificil

    printf("Digite o numero de alunos: ");
    scanf("%d",&n);
    
    inscr = (int *) malloc (n*sizeof(int));
    t1 = (float *) malloc (n*sizeof(float));
    t2 = (float *) malloc (n*sizeof(float));

    printf("Digite o peso das notas das baterias 1 e 2: ");
    scanf("%d %d",&p1,&p2);

    for(cnt = 0; cnt < n; cnt++){
        printf("\nDigite o numero de inscricao do aluno: ");
        scanf("%d",&inscr[cnt]);
        printf("\nDigite a nota do aluno na bateria 1: ");
        scanf("%f",&t1[cnt]);
        printf("\nDigite a nota do aluno na bateria 2: ");
        scanf("%f",&t2[cnt]);
    }

    p = premiados(n,inscr,t1,t2,p1,p2,tam);

    DesenhaLinha();
    printf("Numeros de incricao dos premiados: ");
    for(cnt = 0; cnt < tam; cnt++){
        printf("%d ",p[cnt]);
    }
    printf("\b");
    printf("\n");

    free(p);
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
int *premiados(int n, int *inscr, float *t1, int p1,float *t2, int p2, int *tam){

    register int cnt = 0, cnt2 = 0;
    float mediasPonderada[n], maiorMedia = 0;
    int *premiados, *p, aux[n];

    for(cnt = 0; cnt < n; cnt++){
        mediasPonderada[cnt] = ((t1[cnt]*p1) + (t2[cnt]*p2))/(p1+p2);
        if (mediasPonderada[cnt] > maiorMedia)
            maiorMedia = mediasPonderada[cnt];
    }

    *tam = 0;
    for(cnt = 0; cnt < n; cnt++){
        if(mediasPonderada[cnt] == maiorMedia){
            tam++;
            aux[cnt] = cnt;
        }
    }

    premiados = (int *) malloc (*tam*sizeof(int));

    for(cnt = 0; cnt < tam; cnt++)
        premiados[cnt] = inscr[aux[cnt]];

    p = &premiados[0];

    return p;

}