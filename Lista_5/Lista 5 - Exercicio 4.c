#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
int VerificaTamanhoString(char *str);
void CopiaStringParaOutraString(char *str, char *str2);
int ContaAQuantidadeDeLetrasNaFrase(char *frase);
int main (){



    char recebeString[MAX], *fraseDoUsuario;
    int quantidadeDeLetras, tam;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    tam = VerificaTamanhoString(recebeString);

    fraseDoUsuario = (char *) malloc (tam*sizeof(char));

    DesenhaLinha();

    CopiaStringParaOutraString(recebeString, fraseDoUsuario);
   
    printf("A primeira letra da frase %s eh %c\n",fraseDoUsuario,fraseDoUsuario[0]);

    printf("A ultima letra da frase %s eh %c\n",fraseDoUsuario,fraseDoUsuario[strlen(fraseDoUsuario) - 1]);


    quantidadeDeLetras = ContaAQuantidadeDeLetrasNaFrase(fraseDoUsuario);


    printf("Tem %d letras em %s\n",quantidadeDeLetras,fraseDoUsuario);

    free(fraseDoUsuario);

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

    for(cnt = 0; cnt < strlen(str); cnt++){
        str2[cnt] = str[cnt];
    }
}
int ContaAQuantidadeDeLetrasNaFrase(char *frase){

    register int cnt = 0;
    int letras = 0;

     for(cnt = 0; cnt < MAX; cnt++){
        if (frase[cnt] == '\0')
            break;
        if(frase[cnt] != ' ')
            letras++;
    }

    return letras;

}