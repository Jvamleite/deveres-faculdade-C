#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 20

void DesenhaLinha();
void DesligaPrograma();
int VerificaTamanhoString(char *str);
void CopiaStringParaOutraString(char *str, char *str2);
char* RemoveEspacos(char *str1, const char *str2);
void CamelCase (char *s);
int main (){


    char *s, recebeString[MAX];

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 7\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite uma frase passar para CamelCase: ");
    scanf("%[^\n]",&recebeString);

    s = (char *) malloc (strlen(recebeString)*sizeof(char));

    CopiaStringParaOutraString(recebeString,s);

    CamelCase(s);

    printf("%s em CamelCase eh: %s\n", recebeString, s);

    free(s);

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
char* RemoveEspacos(char *str1, const char *str2){

    const char *p = str2;
    register int cnt = 0;

    while(*p){
        if(!isspace(*p))
            str1[cnt++] = *p;
        p++;
    }

    str1[cnt] = 0;

    return str1;
}
void CamelCase (char *s){

    register int cnt = 0;
    char stringAuxiliar[strlen(s)];

    CopiaStringParaOutraString(s,stringAuxiliar);

    for(cnt = 0; cnt < strlen(s); cnt++){
        if ((int)s[cnt] == 32 )
            stringAuxiliar[cnt+1] = toupper(s[cnt+1]);   
    }

    RemoveEspacos(s,stringAuxiliar);

}

