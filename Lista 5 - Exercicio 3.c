#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int ContaCaractereNaFrase(char *frase, char crt);
int main (){



    char fraseDoUsuario[MAX], caractere;
    int vezesQueCaractereAparece;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&fraseDoUsuario);
    //fraseDoUsuario = tolower(fraseDoUsuario);

    printf("Digite um caractere para procurar na frase: ");
    scanf(" %c",&caractere);


    vezesQueCaractereAparece = ContaCaractereNaFrase(fraseDoUsuario,caractere);

    printf("O caractere %c aparece %d vezes em %s\n", caractere, vezesQueCaractereAparece, fraseDoUsuario);

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
int ContaCaractereNaFrase(char *frase, char crt){

    register int cnt = 0, cnt2 = 0;

    for(cnt = 0; cnt < MAX; cnt++){

        if (frase[cnt] == crt){
            cnt2++;
        }

    }

    return cnt2;

}
