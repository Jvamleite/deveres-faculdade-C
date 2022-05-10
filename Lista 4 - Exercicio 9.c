#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){


    


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 9\n");
    DesenhaLinha();
    printf("\n\n");

    



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

