#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista  - Exercicio \n");
    DesenhaLinha();
    printf("\n\n");


    



    



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
