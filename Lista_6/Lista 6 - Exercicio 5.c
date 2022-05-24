#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
int VerificaTamanhoString(char *frase);
void CopiaStringParaOutraString(char *str, char *str2);
char* cifra_cesar(char* msg);
int main (){

    char recebeString[MAX], *mensagemCodificada, *mensagem;
    int tam;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 6 - Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma mensagem: ");
    scanf("%[^\n]", &recebeString);

    tam = VerificaTamanhoString(recebeString);

    mensagem = (char *) malloc (tam*sizeof(char));

    CopiaStringParaOutraString(recebeString,mensagem);

    mensagem = tolower(mensagem);

    mensagemCodificada = cifra_cesar(mensagem);

    for(cnt = 0; cnt < tam; cnt++){
        printf("%c",mensagemCodificada[cnt]);
    }
    printf("\n");

    DesenhaLinha();


    free(mensagem);

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
int VerificaTamanhoString(char *frase){

    register int cnt = 0, cnt2 = 0;

     for(cnt = 0; cnt < MAX; cnt++){
        if (frase[cnt] == '\0')
            break;
        cnt2++;
    }

    return cnt2;

}
void CopiaStringParaOutraString(char *str, char *str2){

    register int cnt = 0;

    for(cnt = 0; cnt < strlen(str2); cnt++){
        str2[cnt] = str[cnt];
    }
}
char *cifra_cesar (char *msg){

    register int cnt = 0;
    char *mensagemCodificada;
    int tam;

    tam = VerificaTamanhoString(msg);

    mensagemCodificada = (char *) malloc (tam*sizeof(char));

    for(cnt = 0; cnt < tam; cnt++){
        if ((int)msg[cnt] >= 97 && (int)msg[cnt] <= 119)
            mensagemCodificada[cnt] = (char) ((int)msg[cnt]+3);
        if ((int)msg[cnt] == 120)
            mensagemCodificada[cnt] = 'a';
        if ((int)msg[cnt] == 121)
            mensagemCodificada[cnt] = 'b';
        if ((int)msg[cnt] == 122)
            mensagemCodificada[cnt] = 'c';
        mensagemCodificada[cnt] = msg[cnt];
    }

    return mensagemCodificada;    
   

}