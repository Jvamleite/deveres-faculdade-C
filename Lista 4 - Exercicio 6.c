#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64


int valida_mail(char *s);
int main (){

    char *parteLocal, recebeString[MAX];
    int resultado, tamanhoString = 0;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 1 - Exercicio 6\n");
    DesenhaLinha();
    printf("\n\n");


    scanf("%s",&recebeString);
    
    for(cnt = 0; cnt < MAX; cnt++){
        if(recebeString[cnt] == '\0')
            break;
        tamanhoString++;
    }

    parteLocal = (char *) malloc (tamanhoString*sizeof(char));

    for(cnt = 0; cnt < tamanhoString; cnt++){
        parteLocal[cnt] = recebeString[cnt];
    }

    resultado = valida_mail(parteLocal);

    if(resultado == -1)
        printf("Parte local invalida!");
    else
        printf("Parte local valida");



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
int valida_mail(char *s){

    register int cnt = 0, quantidadeDeNumeros = 0, quantidadeDeLetras = 0;
    int tamanhoParteLocal;

    for(cnt = 0; cnt < MAX; cnt++){
        if(s[cnt] == '\0')
            break;
        tamanhoParteLocal++;
    }

    cnt = 0;
    //Verifica o primeiro caractere da parteLocal
    if ((int)s[cnt] < 97 || (int) s[cnt] > 122)
        return -1;
    //Verifica o ultimo caractere da parteLocal
    if ((int)s[tamanhoParteLocal-1] == 46)
        return -1;

    for(cnt = 0; cnt < tamanhoParteLocal; cnt++){
        if(((int)s[cnt] < 97 || (int) s[cnt] > 122) && ((int)s[cnt] != 46) && ((int)s[cnt] != 45) && ((int)s[cnt] != 95) && (((int)s[cnt] < 0) || (int)s[cnt] > 9))
            return -1;
        if ((int)s[cnt] == 46 && (int)s[cnt+1] == 46)
            return -1;
        if ((int)s[cnt] >= 0 && (int)s[cnt] <= 9)
            quantidadeDeNumeros++;
        if ((int)s[cnt] >= 97 && (int) s[cnt] <= 122)
            quantidadeDeLetras++;
    }

    if (quantidadeDeLetras < 2)
        if (quantidadeDeNumeros == 0)
            return -1;

    return 1;

}