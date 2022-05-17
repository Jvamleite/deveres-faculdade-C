#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
void CopiaStringParaOutraString(char *str, char *str2);
int main (){



    char recebeString[MAX], *nomeDoUsuario, abreviacao[10];
    int quantidadeDeLetras;
    register int cnt = 0, cnt2 = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite um nome: ");
    scanf("%[^\n]",&recebeString);

    nomeDoUsuario = (char *) malloc (strlen(recebeString)*sizeof(char));

    DesenhaLinha();

    CopiaStringParaOutraString(recebeString, nomeDoUsuario);
   
    for(cnt = 0; cnt <strlen(nomeDoUsuario); cnt++){
        if (nomeDoUsuario[cnt] >= 65 && nomeDoUsuario[cnt] <= 90 ){
            abreviacao[cnt2] = nomeDoUsuario[cnt];
            cnt2++;
            abreviacao[cnt2] = '.';
            cnt2++;
        }
    }

    printf("A abreviacao desse nome eh: ");
    for(cnt = 0; cnt < cnt2; cnt++){
        printf("%c",abreviacao[cnt]);
    }
    printf("\n");

    free(nomeDoUsuario);

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
