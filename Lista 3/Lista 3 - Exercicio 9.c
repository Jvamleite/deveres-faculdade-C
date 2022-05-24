#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Declara o português como língua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor");
    printf("do terceiro elemento da matriz?:\n\n");
    printf("a) *(pulo+2)  b) *(pulo+4)  c) pulo+4  d) pulo+2\n");

    printf("Resposta: letra a)\n");
    printf("Justificativa: *(pulo+2) retorna o valor da variável inicial do vetor(indice 0) mais 2, ou seja o valor do terceiro elemento da matriz\n");
    

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