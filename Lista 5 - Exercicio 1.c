#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

void DesenhaLinha();
void DesligaPrograma();
void CopiaStringParaOutraString(char *str, char *str2);
void ContaVogais(char *str, int *vogais);
int main (){



    char recebeString[MAX], *stringDoUsuario;
    int numeroDeVogais;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 13\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    stringDoUsuario = (char *) malloc (strlen(recebeString)*(sizeof(char)));

    CopiaStringParaOutraString(recebeString,stringDoUsuario);

    ContaVogais(stringDoUsuario,&numeroDeVogais);

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
void CopiaStringParaOutraString(char *str, char *str2){

    register int cnt = 0;

    for(cnt = 0; cnt < strlen(str); cnt++){
        str2[cnt] = str[cnt];
    }
}
void ContaVogais(char *str, int *vogais){

    register int cnt = 0;

    *vogais = 0;

    for(cnt = 0; cnt < strlen(str); cnt++){
        if ((int)str[cnt] == 97 || (int)str[cnt] == 101 || (int)str[cnt] == 105 || (int)str[cnt] == 111 || (int)str[cnt] == 117)
            *vogais += 1;
    }

}