#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#define MAX 100
#define MAXC 10
#define RES 5

void PreencheListas(char *opn[MAX], int idades[MAX]);
int main (){

	int listaIdades[MAX];
	char *listaOpnioes[MAX];

	printf("\tLista 3 - Exercicio 14\n\n");

    PreencheListas(listaOpnioes,listaIdades);
    
	return 0;
}
void PreencheListas(char *opn[MAX], int idades[MAX]){

    //Gerar as respostas para as perguntas 'sua idade' e 'sua opnião em relação ao filme'
    //Achei melhor isso que fazer  o usuário registrar 100 idades e 100 opniões.

    register int cnt = 0;
    char possiveisOpnioes[6][MAXC] = {"otimo","Bom","Regular","Ruim","Pessimo"};

    //Inicia o gerador de números aleatórios
    srand(time(NULL));

    for(cnt = 0; cnt<MAX; cnt++){
        idades[cnt] = ((rand()%90)+10);
        opn[cnt] = possiveisOpnioes[(rand()%5)];
    }
}
 
        





