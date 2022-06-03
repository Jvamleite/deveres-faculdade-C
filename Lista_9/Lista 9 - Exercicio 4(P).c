#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 4
#define MAXNOME 31

void DesenhaLinha();
void DesligaPrograma();
void atribui(char **nomes, int indice, char *nome);
char * get_sobrenome(char *nome);
main()
{

    int i;
    char **nomes;
    char *sobrenome;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    nomes = (char **) malloc(MAX*sizeof(char *));
    for ( i=0 ; i<MAX ; i++)
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);

    atribui(nomes,0,"Fulano Silva");
    atribui(nomes,1,"Maria do Carmo"); 
    atribui(nomes,2,"Beltrano Belmonte"); 
    atribui(nomes,3,"Pedro dos Santos");

    for (i=0 ; i<MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d",strlen(sobrenome)>5?i:0); // 2o printf
    }

    printf("\n%c", nomes[0][3]); // 3o printf

    DesligaPrograma();
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
void atribui(char **nomes, int indice, char *nome)
{
    nomes[indice] = nome;
}
char* get_sobrenome(char *nome){

    //o programa ta com problema aqui e eu não consigo analizar oq eu errei pq eu boto um breakpoint na instrução for, clico em stepinto e ele pula a instrução inteira inves de ir pra proxima linha

    register int cnt = 0;
    int indice,tam = 0;
    char *sobrenome;

    for(cnt = 0; cnt < MAXNOME; cnt++)
    {   if(nome[cnt]=='\0')
            break;
        tam++;
    }

    for(cnt = 0; cnt < tam; cnt++)
        if(nome[cnt]==' ')
            indice = cnt;

    sobrenome = (char *) malloc ((tam-indice)*sizeof(char));
    
    for(cnt = 0; cnt < tam-indice; cnt++)
        sobrenome[cnt] = 0;
        
    for(cnt = indice+1; cnt <tam-indice; cnt++){
        if(nome[cnt]=='\0')
            break;
        strcat(sobrenome,nome[cnt]);
    }
    
    return sobrenome;



}
