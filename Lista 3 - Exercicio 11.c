#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define MAX 100
#define MAXC 10
#define RES 5

void PreencheIdadeeRespostas(char *opn[MAX], int idades[MAX]);
void ContaRespostas(int respostas[RES],char *opn[MAX]);
int main (){

	//Declara o português como lingua padrão pro programa
	setlocale(LC_ALL,"Portuguese");

	int idades[MAX], quantidade_respostas[RES];
	char *opnioes[MAX];

	printf("\tLista 3 - Exercício 14\n\n");

    PreencheIdadeeRespostas(opnioes,idades);
    ContaRespostas(quantidade_respostas,opnioes);

    printf("Houveram %d pessoas que responderam 'Ótimo'",quantidade_respostas[0]);
    
	return 0;
}
void PreencheIdadeeRespostas(char *opn[MAX], int ida[MAX]){

    //Gerar as respostas para as perguntas 'sua idade' e 'sua opnião em relação ao filme'
    //Achei melhor isso que fazer  o usuário registrar 100 idades e 100 opniões.

    register int cnt = 0;
    char possiveis_opnioes[5][MAXC] = {"Ótimo","Bom","Regular","Ruim","Péssimo"};

    //Inicia o gerador de números aleatórios
    srand(time(NULL));

    for(cnt = 0; cnt<MAX; cnt++){
        ida[cnt] = ((rand()%90)+10);
        opn[cnt] = possiveis_opnioes[(rand()%5)];
    }
}
void ContaRespostas(int respostas[RES],char *opn[MAX]){
            
    register int cnt = 0;
    int soma = 0;
        
    for(cnt = 0; cnt<MAX; cnt++){
        if(strcmp(opn[cnt],"Ótimo")==0)
            soma++;
    }
    respostas[0] = soma;
}
        
        





