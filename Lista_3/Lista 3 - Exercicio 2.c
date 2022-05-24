#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Declara o portugês como linha padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Questão 2: \n");
    printf("Seja o seguinte techo de programa: \n");
    printf("int i=3ej=5;\n");
    printf("int *p, *q\n");
    printf("p = &i;\n");
    printf("q = &j\n");
    printf("Qual o valor das seguintes expressões?\n");
    printf("a) p == &i  b) *p-*q  c) **&p  d) 3* - *p/(*q)+7\n\n");

    printf("a) p == &i\n");
    printf("Resposta: qualquer valor diferente de zero\n");
    printf("Justificativa: como C não suporta valor booleano qualquer valor diferente zero é equivalente a true\n");
    printf("b) *p - *q\n");
    printf("Resposta: -2\n");
    printf("Justificativa: o valor que o ponteiro p aponta, que seria o valor de i - o valor que o ponteiro q aponta que seria o valor de j\n ");
    printf("c) **&p\n");
    printf("Resposta: 3\n");
    printf("Justificativa: * e & se anulam, sobrando assim *p que é o valor que o ponteiro p aponta\n");
    printf("d) 3* - *p/(*q)+7\n");
    printf("Resposta: 6\n");
    printf("Justificativa: por estar sem parenteses, ele seguiu a ordem de precedencia da esquerda para a direita, fez primeiro 3 * - *p\n");
    printf("Dividiu o resultado por *q e somou 7\n");
    
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