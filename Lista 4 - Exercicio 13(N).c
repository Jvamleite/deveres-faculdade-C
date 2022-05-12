#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
void CopiaStringParaOutraString(char *str, char *str2);
int main (){



    char recebeString[MAX], *stringDoUsuario;
    register int cnt = 0;


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 13\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    stringDoUsuario = (char *) malloc (strlen(recebeString)*(sizeof(char)));

    CopiaStringParaOutraString(recebeString,stringDoUsuario);

    
    

    free(stringDoUsuario);

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