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

    printf("Professor eu nao entendi o que vc quis dizer com 'mostre o andamento da execucao'\n");
    printf("No primeiro while, eh passado para o vetor misterio a palavra teste ao contrario\n");
    printf("e no segundo, foi sendo passado a palavra otimo de forma normal, sendo imprimesso no final: etset otimo\n");
    



    



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
