#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int *aprovados(int n, int *mat, float *notas, int *tam);
int main (){


    register int cnt = 0;
    int *mat, n, tam, *matriculasAprovados; 
    float *notasFinais;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 6 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de alunos da turma: ");
    scanf("%d",&n);


    notasFinais = (float *) malloc (n*sizeof(float));
    mat = (float *) malloc (n*sizeof(int));

    for(cnt = 0; cnt < n; cnt++){
        mat[cnt] = cnt+1;
        printf("Digite a nota do %d aluno: ", cnt+1);
        scanf("%f",&notasFinais[cnt]);
    }

    matriculasAprovados = aprovados(n,mat,notasFinais,&tam);

    printf("Tivemos %d aprovados\n",tam);
    printf("Matriculas dos apovados: ");
    for(cnt = 0; cnt < tam; cnt++){
        printf("%d",matriculasAprovados[cnt]);
    }
    printf("\n");


    DesenhaLinha();


    free(notasFinais);
    free(mat);
    free(matriculasAprovados);

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
int *aprovados(int n, int *mat, float *notas, int *tam){

    register int cnt = 0;
    float somaDasNotas = 0, media;
    int alunosAprovados = 0, *matriculasAprovados, *p;

    for(cnt = 0; cnt < n; cnt++)
        if (notas[cnt] >= 5.0)
            alunosAprovados++;

    matriculasAprovados = (int *) malloc (alunosAprovados*sizeof(int));

    for(cnt = 0; cnt < alunosAprovados; cnt++)
        if (notas[cnt] >= 5.0)
            matriculasAprovados[cnt] = mat[cnt];

    *tam = alunosAprovados;
    
    p = &matriculasAprovados;

    return p;
}
