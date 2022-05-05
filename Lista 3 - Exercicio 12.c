#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 80

void DesenhaLinha();
void DesligaPrograma();
int main (){

    register int cnt = 0;
    char frase[80];
    
    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 12\n");
    DesenhaLinha();
    printf("\n\n");

    for (cnt = 0; cnt < MAX; cnt++){
        frase[cnt] = getch();
        if ((int) frase[cnt] == 13 )
            break;
    }
    cnt = 0;
    for (cnt = 0; cnt < MAX; cnt++){
        printf("%c",frase[cnt]);
        if ((int) frase[cnt] == 32)
            printf("\n");
        if ((int) frase[cnt] == 13)
            break;
    }

    
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