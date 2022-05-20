#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");


    printf("3. O que sera impresso na tela pelo seguinte programa: \n\n");
    printf("int main ()\n");
    printf("{\n");
    printf("int number[5];\n");
    printf("int *p;\n");
    printf("int n;\n");
    printf("\n\n");
    printf("p = numbers;\n");
    printf("*p=10;\n");
    printf("p++;\n");
    printf("*p=20;\n");
    printf("p=&numbers[2]\n");
    printf("*p=30\n");
    printf("p = numbers + 3;\n");
    printf("*p=40;\n");
    printf("p = numbers;\n");
    printf("*(p+4) = 50;\n\n");
    printf("for(cnt = 0; n<5; n++)\n");
    printf("    printf('%%d', numbers[n]);\n\n");

    printf("Resposta: Esse programa preenche o vetor numbers de formas diferentes manipulando o ponteiro");
    printf("e a saida eh: 10, 20, 30, 40, 50");


    DesenhaLinha();



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
