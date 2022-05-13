#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
void CopiaStringParaOutraString(char *str, char *str2);
int main (){



    char recebeString[MAX], *stringDoUsuario, caractere, *stringFinal;
    register int cnt = 0;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 12\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    printf("Digite um caractere para remover da frase: ");
    scanf(" %c",&caractere);

    stringDoUsuario = (char *) malloc (strlen(recebeString)*(sizeof(char)));

    stringFinal = (char *) malloc (strlen(recebeString)*(sizeof(char)));

    CopiaStringParaOutraString(recebeString,stringDoUsuario);

    DesenhaLinha();
    for(cnt = 0; cnt < strlen(stringDoUsuario); cnt++){
        if (stringDoUsuario[cnt] != caractere)
            stringFinal[cnt] = stringDoUsuario[cnt];
            printf("%c",stringFinal[cnt]);
    }
    printf("\n");

    free(stringDoUsuario);

    free(stringFinal);

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
void CopiaStringParaOutraString(char *str, char *str2){

    register int cnt = 0;

    for(cnt = 0; cnt < strlen(str); cnt++){
        str2[cnt] = str[cnt];
    }
}