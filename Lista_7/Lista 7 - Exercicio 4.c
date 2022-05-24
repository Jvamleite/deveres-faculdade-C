#include <stdio.h>
#include <stdlib.h>
#define MAX 26

void DesenhaLinha();
void DesligaPrograma();
void PreencheVetorComLetras(char *v);
void ImprimeVetor (char *v);
int main (){

    
    char caracteres[MAX];
    
    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 7- Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    
    PreencheVetorComLetras(caracteres);
    
    DesenhaLinha();
    ImprimeVetor(caracteres);

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
void PreencheVetorComLetras(char *v){

    register int cnt = 0;
    char alfabeto[MAX] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


    for(cnt = 0; cnt < MAX; cnt++){
        v[cnt] = alfabeto[cnt];
    }
}
void ImprimeVetor(char *v){

    register int cnt = 0;

    for(cnt = 0; cnt <  MAX; cnt++ )
        printf("%c ", v[cnt]);

}
