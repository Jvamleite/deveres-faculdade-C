#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 7- Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");


    
    printf("Sera impresso na tela o valor de v + 1 (2) de duas formas diferentes\n");
    printf("Na funcao f1 com o valor incial de v sendo passado por valor e na f2 sendo passado por referencia\n");
    printf("tbm sera impresso o retorno da funcao f3 (3), agora eh tres e nao dois, pq ao passar por referencia em f2, o valor de v foi alterado diretamente na memoria\n");
    printf("No ultimo print da main sera impresso a mesma coisa que foi impressa em f3");


    



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
