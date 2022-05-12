#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64



void DesenhaLinha();
void DesligaPrograma();
int VerificaTamanhoString(char *str);
void CopiaStringParaParteLocal(char *str, char *PL);
int VerificaSePrimeiroCaractereEValido(char *str);
int VerificaSeCaractereEValido(char *str, int ind);
int VerificaSePossuiSequenciaDePontos(char *str, int ind);
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
    scanf(" %s",&recebeString);
    
    tamanhoDaString = strlen(recebeString);

    parteLocal = (char *) malloc (tamanhoDaString*sizeof(char));

    CopiaStringParaParteLocal(recebeString,parteLocal);

    resultado = valida_mail(parteLocal);

    free(parteLocal);

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
void CopiaStringParaParteLocal(char *str, char *PL){

    register int cnt = 0;

    for(cnt = 0; cnt < strlen(str); cnt++){
        PL[cnt] = str[cnt];
    }
}
int VerificaSePrimeiroCaractereEValido(char *str){
    if ((int)str[0] < 97 || (int) str[0] > 122)
        return -1;
    return 1;
    
}
int VerificaSeCaractereEValido(char *str, int ind){
    if(((int)str[ind] < 97 || (int) str[ind] > 122) && ((int)str[ind] != 46) && ((int)str[ind] != 45) && ((int)str[ind] != 95) && (((int)str[ind] < 0) || (int)str[ind] > 9))
            return -1;
    return 1;
}
int VerificaSePossuiSequenciaDePontos(char *str, int ind){
    if ((int)str[ind] == 46 && (int)str[ind+1] == 46)
            return -1;
    return 1;
}
int valida_mail(char *s){

    register int cnt = 0, quantidadeDeNumeros = 0, quantidadeDeLetras = 0;
    int resultado = 1;

    resultado = VerificaSePrimeiroCaractereEValido(s);
    
    //Verifica o ultimo caractere da parteLocal
    if ((int)s[strlen(s)-1] == 46)
        return -1;

     while(cnt < strlen(s) || resultado != -1) {

        resultado = VerificaSeCaractereEValido(s,cnt);

        //resultado = VerificaSePossuiSequenciaDePontos(s,cnt);

        if ((int)s[cnt] == 46 && (int)s[cnt+1] == 46)
            return -1;

        //Conto a quantidade de numeros
        if ((int)s[cnt] >= 0 && (int)s[cnt] <= 9)
            quantidadeDeNumeros++;

        //Conto a quantiade de letras
        if ((int)s[cnt] >= 97 && (int) s[cnt] <= 122)
            quantidadeDeLetras++;

        cnt++;
        
    } 

    if (resultado == -1){
        return resultado;
    }

    if (quantidadeDeLetras < 2)
        if (quantidadeDeNumeros == 0)
            return -1;

    return 1;

}