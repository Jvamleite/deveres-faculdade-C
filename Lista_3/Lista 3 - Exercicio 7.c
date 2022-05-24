#include <stdio.h>
#include <locale.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Declara o português como língua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    printf("7. Seja a seguinte sequência de instruções em um programa C:\n\n");
    printf("int *pti;\n");
    printf("int veti[]={10,7,2,6,3};\n");
    printf("pti = veti;\n");
    printf("Qual afirmativa é falsa?\n");

    printf("a. *pti é igual a 10\n");
    printf("b. *(pti+2) é igual a 2\n");
    printf("c. pti[4] é igual a 3\n");
    printf("d. pti[1] é igual a 10\n");
    printf("e. *(veti+3) é igual a 6\n");

    printf("Resposta: D\n");
    printf("Justificativa: pti[1] é igual a 7 e não 10");

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