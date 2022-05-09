#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
#define RES 5

void DesenhaLinha();
void DesligaPrograma();
void PreencheListas(int opn[MAX], int idades[MAX]);
void ContaRespostas(int opn[MAX], int respostas[RES]);
int main (){

	int listaIdades[MAX], numeroRespostas[RES], listaOpnioes[MAX], somaIdades = 0, maiorIdadePessimo = 0, maiorIdadeOtimo = 0, maiorIdadeRuim = 0;
    register int cnt = 0;
    float mediaIdadeRuim;

	//Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 14\n");
    DesenhaLinha();
    printf("\n\n");

    PreencheListas(listaOpnioes,listaIdades);

    ContaRespostas(listaOpnioes, numeroRespostas);

    printf("A quantidade de respostas otimo foi: %d\n",numeroRespostas[0]);
    printf("A diferenca percentual entre as respostas bom e regular foi de %d%%\n", abs(numeroRespostas[1] - numeroRespostas[2]));

    for(cnt = 0; cnt <MAX; cnt ++){
        if (listaOpnioes[cnt] == 2)
            somaIdades += listaIdades[cnt];
        if (listaIdades[cnt] > maiorIdadePessimo && listaOpnioes[cnt] == 1)
            maiorIdadePessimo = listaIdades[cnt];
        if (listaIdades[cnt] > maiorIdadeOtimo && listaOpnioes[cnt] == 5)
            maiorIdadeOtimo = listaIdades[cnt];
        if (listaIdades[cnt] > maiorIdadeRuim && listaOpnioes[cnt] == 2)
            maiorIdadeRuim = listaIdades[cnt];
    }
    mediaIdadeRuim = somaIdades/numeroRespostas[3];


    printf("A media da idade das pessoas que responderam ruim eh %.2f\n",mediaIdadeRuim);
    printf("A porcentagem de respostas pessimo eh %d%% e maior idade que respondeu pessimo foi %d\n", numeroRespostas[4], maiorIdadePessimo);
    printf("A diferenca entre a maior idade que respondeu otimo e a maior idade que respondeu ruim eh %d\n", maiorIdadeOtimo - maiorIdadeRuim);

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
void PreencheListas(int opn[MAX], int idades[MAX]){

    //Gerar as respostas para as perguntas 'sua idade' e 'sua opnião em relação ao filme'
    //Achei melhor isso que fazer  o usuário registrar 100 idades e 100 opniões.

    //Professor eu tentei de todas as formas trabalhar com as strings otimo, bom, regular e etc 
    //Mas mesmo conseguindo preencher com 100 strings a matriz, quando eu tentava compara (mesmo a funcao strcmp)
    //Dava errado, ou ele contava a mais ou a menos, ou simplesmente não contava alguma string
    //Pra entregar pelo menos a funcionalidade eu associei números a cada resposta pra resolver meu problema

    register int cnt = 0;
    // 5 == otimo, 4 == bom, 3 == regular, 2 == ruim, 1 == pessimo
    int possiveisOpnioes[5] = {5,4,3,2,1};


    //Inicia o gerador de números aleatórios
    srand(time(NULL));

    for(cnt = 0; cnt<MAX; cnt++){
        idades[cnt] = ((rand()%90)+10);
        opn[cnt] = possiveisOpnioes[(rand()%5)];
    }
}
void ContaRespostas(int opn[MAX], int respostas[RES]){

    register int cnt = 0;
    int quantidadeOtimos = 0, quantidadeBom = 0, quantidadeRegular = 0, quantidadeRuim = 0, quantidadePessimo = 0 ;

    for (cnt = 0; cnt < MAX; cnt++){
        if (opn[cnt] == 5)
            quantidadeOtimos++;
        else if (opn[cnt] == 4)
            quantidadeBom++;
        else if (opn[cnt] == 3)
            quantidadeRegular++;
        else if (opn[cnt] == 2)
            quantidadeRuim++;
        else
            quantidadePessimo++;
    }

    respostas[0] = quantidadeOtimos;
    respostas[1] = quantidadeBom;
    respostas[2] = quantidadeRegular;
    respostas[3] = quantidadeRuim;
    respostas[4] = quantidadePessimo;
}
 
        





