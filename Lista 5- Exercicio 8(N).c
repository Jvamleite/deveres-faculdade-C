#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
void CopiaStringParaOutraString(char *str, char *str2);
int main (){



    char recebeString[MAX], *palavraDoUsuario, recebeOutraString[MAX], *outraPalavraDoUsuario, *p;
    int quantidadeDeLetras;
    register int cnt = 0, cnt2 = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 8\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma palavra: ");
    scanf("%[^\n]",&recebeString);

    palavraDoUsuario = (char *) malloc (strlen(recebeString)*sizeof(char));

    printf("Digite outra palavra: ");
    scanf("%[^\n]",&recebeOutraString);

    outraPalavraDoUsuario = (char *) malloc (strlen(recebeString)*sizeof(char));

    DesenhaLinha();

    CopiaStringParaOutraString(recebeString, palavraDoUsuario);
    CopiaStringParaOutraString(recebeString, outraPalavraDoUsuario);
   
    if(strcmp(palavraDoUsuario,outraPalavraDoUsuario) == 0)
        printf("Essas palavras são iguais!\n");
    else
        printf("Essas palavras não iguais!\n");
    
    *p = strstr(palavraDoUsuario,outraPalavraDoUsuario);

    if (*p == NULL)
        printf("A segunda palavra não eh uma substring da primeira!");
    else
        printf("A segunda palavra eh uma substring da primeira");


    free(palavraDoUsuario);
    free(outraPalavraDoUsuario);

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


