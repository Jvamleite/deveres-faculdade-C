#include <stdio.h>
#include <stdlib.h>

    struct aluno {
        int mat; /* Matricula do aluno */
        char nome[81]; /* Nome do aluno */
        };
typedef struct aluno Aluno;
    struct prova {
        Aluno a; /* Aluno que fez a prova */
        float q1, q2, q3, q4; /* Nota em cada questao */
    };
typedef struct prova Prova;

    typedef enum booleano {
        true = 1, false = 0
    } bool;

void DesenhaLinha();
void DesligaPrograma();
bool compara(Prova* v1, Prova* v2);
void troca(Prova* v1, Prova* v2);
void ordena(int n, Prova** v);
int main (){


    Prova** prova;
    Aluno Maria = {1, "Maria"}, Ana = {2, "Ana"}, Sandra = {3, "Sandra"};
    Prova provaMaria = {Maria, 3,1,1,1}, provaAna = {Ana, 3,1,1,1}, provaSandra = {Sandra,4,1,1,1}, *pm = &provaMaria, *pa = &provaAna, *ps = &provaSandra;
    

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9- Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");
    
    prova = (Prova**) malloc (3*sizeof(Prova));
    

    prova[0] = pm;
    prova[1] = pa;
    prova[2] = ps;

    ordena(3,prova);




    



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
void ordena(int n, Prova** v)
{
    int fim,i;

    for(fim=n-1; fim>0; fim--)
        for(i=0; i<fim; i++)
            if(compara(v[i],v[i+1]))
                troca(&v[i],&v[i+1]);

}
bool compara(Prova* v1, Prova* v2){

    float somaDasNotasv1 = 0, somaDasNotasv2 = 0;
    register int cnt = 0;

    somaDasNotasv1 += v1->q1;
    somaDasNotasv1 += v1->q2;
    somaDasNotasv1 += v1->q3;
    somaDasNotasv1 += v1->q4;
    somaDasNotasv2 += v2->q1;
    somaDasNotasv2 += v2->q2;
    somaDasNotasv2 += v2->q3;
    somaDasNotasv2 += v2->q4;

    if(somaDasNotasv1<somaDasNotasv2)
        return true;
    else if (somaDasNotasv1==somaDasNotasv2)
        if(v1->a.nome[0] > v2->a.nome[0])
            return true;
    else
        return false;
    

}
void troca(Prova* v1, Prova* v2){

    Prova *p;
    p = v1;
    v1 = v2;
    v2 = p;
}