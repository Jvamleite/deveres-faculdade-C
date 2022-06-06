#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct endereco {
        char rua[100]; /* Nome da rua */
        int numero; /* Numero do imovel */
    } Endereco;
    typedef struct notas {
    float p1, p2, p3; /* Notas nas provas */
    } Notas;
    typedef struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
    Notas nota; /* Notas nas provas */
    Endereco *end; /* Endereco do aluno */
    } Aluno;


void DesenhaLinha();
void DesligaPrograma();
Aluno ** alocaAlunos(int n);
void atribui(Aluno ** a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero);
int main (){

    register int cnt = 0;
    Aluno **alunos;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9- Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");

    alunos = alocaAlunos(3);
    atribui(alunos,0,10,"Um",1,1,1,"Getulio Vargas",100);
    atribui(alunos,1,20,"Dois",8,8,8,"Amaral Peixoto",200);
    atribui(alunos,2,30,"Tres",9,9,9,"Ouro Verde",300);



    
    for(cnt = 0; cnt < 3; cnt++)
    {
        free(alunos[cnt]->end);
        free(alunos[cnt]);
    }
    free(alunos);
    
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
Aluno ** alocaAlunos(int n){

    Aluno **a;
    a = (Aluno **) malloc (n*sizeof(Aluno));

    return a;
}
void atribui(Aluno ** a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero){

    a[indice] = (Aluno *) malloc (sizeof(Aluno));
    a[indice]->end = (Endereco *) malloc (sizeof(Endereco));

    a[indice]->mat = matricula;
    strcpy(a[indice]->nome,nome);
    a[indice]->nota.p1 = nota1;
    a[indice]->nota.p2 = nota2;
    a[indice]->nota.p3 = nota3;
    strcpy(a[indice]->end->rua,nomeRua);
    a[indice]->end->numero = numero;
}
