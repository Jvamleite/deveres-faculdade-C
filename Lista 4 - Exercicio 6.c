#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64


int VerificaTamanhoString(char *str);
void CopiaStringParaParteLocal(char *str, char *PL, int TamStr);
int valida_mail(char *s);
int main (){

    char *parteLocal, recebeString[MAX];
    int resultado, tamanhoDaString = 0;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite a parte local do seu email: ");
    scanf("%s",&recebeString);
    
    tamanhoDaString = VerificaTamanhoString(recebeString);

    parteLocal = (char *) malloc (tamanhoDaString*sizeof(char));

    CopiaStringParaParteLocal(recebeString,parteLocal,tamanhoDaString);

    resultado = valida_mail(parteLocal);

    DesenhaLinha();
    if(resultado == -1)
        printf("Parte local invalida!\n");
    else
        printf("Parte local valida!\n");

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
int VerificaTamanhoString(char *str){

    register int cnt = 0;
    int tamStr= 0;

    for(cnt = 0; cnt < MAX; cnt++){
        if(str[cnt] == '\0')
            break;
        tamStr++;
    }

    return tamStr;
}
void CopiaStringParaParteLocal(char *str, char *PL, int TamStr){

    register int cnt = 0;

    for(cnt = 0; cnt < TamStr; cnt++){
        PL[cnt] = str[cnt];
    }
}
int valida_mail(char *s){

    register int cnt = 0, quantidadeDeNumeros = 0, quantidadeDeLetras = 0;
    int tamanhoParteLocal;

    tamanhoParteLocal = VerificaTamanhoString(s);

    //Verifica o primeiro caractere da parteLocal
    if ((int)s[cnt] < 97 || (int) s[cnt] > 122)
        return -1;
    
    //Verifica o ultimo caractere da parteLocal
    if ((int)s[tamanhoParteLocal-1] == 46)
        return -1;

    for(cnt = 0; cnt < tamanhoParteLocal; cnt++){

        //Verifica se a parteLocal possui algum caractere invalido
        if(((int)s[cnt] < 97 || (int) s[cnt] > 122) && ((int)s[cnt] != 46) && ((int)s[cnt] != 45) && ((int)s[cnt] != 95) && (((int)s[cnt] < 0) || (int)s[cnt] > 9))
            return -1;
        //Verifica possui uma sequencia de pontos finais
        if ((int)s[cnt] == 46 && (int)s[cnt+1] == 46)
            return -1;
        //Conto a quantidade de numeros
        if ((int)s[cnt] >= 0 && (int)s[cnt] <= 9)
            quantidadeDeNumeros++;
        //Conto a quantiade de letras
        if ((int)s[cnt] >= 97 && (int) s[cnt] <= 122)
            quantidadeDeLetras++;
    }

    if (quantidadeDeLetras < 2)
        if (quantidadeDeNumeros == 0)
            return -1;

    return 1;

}