#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
int VerificaTamanhoString(char * str);
void CopiaStringParaOutraString(char *str, char *str2);
void ContaVogaisDaString(char *str, int *vogais);
int main (){



    char recebeString[MAX], *stringDoUsuario;
    int numeroDeVogais, tam;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 5 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    tam = VerificaTamanhoString(recebeString);

    stringDoUsuario = (char *) malloc (tam*(sizeof(char)));

    CopiaStringParaOutraString(recebeString,stringDoUsuario);

    ContaVogaisDaString(stringDoUsuario,&numeroDeVogais);

    printf("Nessa frase ah %d vogais\n",numeroDeVogais);
    
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
void ContaVogaisDaString(char *str, int *vogais){

    register int cnt = 0;
    *vogais = 0;

    for(cnt = 0; cnt < strlen(str); cnt++){
        if ((int)str[cnt] == 97 || (int)str[cnt] == 101 || (int)str[cnt] == 105 || (int)str[cnt] == 111 || (int)str[cnt] == 117)
            *vogais += 1;
    }

}