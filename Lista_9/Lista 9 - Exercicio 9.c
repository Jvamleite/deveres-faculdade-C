#include <stdio.h>
#include <stdlib.h>

    typedef struct ALUNO {

        float media;

    } ALUNO;

void DesenhaLinha();
void DesligaPrograma();
void ordena (ALUNO turma[], int tam);
int main (){

    int numeroDeAlunos;
    ALUNO* alunos;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9- Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de alunos: ");
    scanf("%d",&numeroDeAlunos);

    alunos = (ALUNO*) malloc (numeroDeAlunos*sizeof(ALUNO));

    for(cnt = 0; cnt < numeroDeAlunos; cnt++){
        printf("Digite a media do aluno %d",cnt+1);
        scanf("%f",&alunos[cnt].media);
    }

    ordena(alunos,numeroDeAlunos);
    



    



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

void ordena (ALUNO turma[], int tam) {
    int i, foraOrdem , jaOrdenados = 0;
    ALUNO temp;
    do {
    foraOrdem = 0;
    for (i = 0; i < 4 - 1 - jaOrdenados ; i++) {
        if (turma[i]. media > turma[i+1]. media) {
        temp = turma[i];
        turma[i] = turma[i+1];
        turma[i+1] = temp ;
        foraOrdem = 1;
        }
    }
    jaOrdenados ++;
    } while ( foraOrdem );
}