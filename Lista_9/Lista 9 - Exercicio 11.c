#include <stdio.h>
#include <stdlib.h>

    typedef struct Aluno {
        int matricula;
        float *vNotas; 
        char nome[100];
    }Aluno;
    typedef struct Materia {
        Aluno *V; 
        float *media; 
        int nAlunos 
    }Materia;

void DesenhaLinha();
void DesligaPrograma();
Aluno* fillAluno();
void mediaMateria(Materia *m1);
Materia * fillMateria(int numAlunos);
void mostraMateria(Materia *m1);
int main (){

    int numeroDeAlunos;
    Materia *materia;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista  - Exercicio \n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de alunos de determinada materia: ");
    scanf("%d",&numeroDeAlunos);

    materia = fillMateria(numeroDeAlunos);
    
    Printf("Informações Registradas: ");
    DesenhaLinha();
    mostraMateria(materia);

    
    free(materia -> media);
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
Aluno* fillAluno(){

    Aluno *a;
    register int cnt = 0;

    a->vNotas = (float *) malloc (5*sizeof(float));
    
    printf("Digite o numero de matricula do aluno: ");
    scanf("%d",&a -> matricula);

    for(cnt = 0; cnt < 5; cnt++){
        printf("Digite a %d nota do aluno: ",cnt+1);
        scanf("%f",&a -> vNotas[cnt]);
    }

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",&a -> nome);

    return a;

}
void mediaMateria(Materia *m1){

    register int cnt = 0, cnt2 = 0;
    float somaNotas;

     m1 -> media = (float *) malloc (m1 -> nAlunos*sizeof(float));
     

     for(cnt = 0; cnt < m1 -> nAlunos; cnt++){
        somaNotas = 0;
        for(cnt2 = 0; cnt2 < 5; cnt2++ ){
            somaNotas += m1 -> V[cnt].vNotas[cnt2];
         }
        m1 -> media[cnt] = somaNotas/5;
     }

}
Materia * fillMateria(int numAlunos){

    Materia *m;
    register int cnt = 0;

    m->V = (Aluno *) malloc (numAlunos*sizeof(Aluno));

    m -> nAlunos = numAlunos;
    for(cnt = 0; cnt < numAlunos; cnt++){
        printf("Matriculando primeiro aluno\n");
        DesenhaLinha();
        m -> V[cnt] = *fillAluno();
    }

    mediaMateria(m);

    return m;

}
void mostraMateria(Materia *m1){

    register int cnt = 0;

    for(cnt = 0; cnt < m1 -> nAlunos; cnt++){
        printf("Aluno: %s\n",m1 -> V[cnt].nome);
        printf("Numero de matricula: %d\n", m1 -> V[cnt].matricula);
        printf("Media final na materia: %.2f\n",m1 -> media[cnt]);
    }
    
}
