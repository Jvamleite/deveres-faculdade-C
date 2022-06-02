#include <stdio.h>
#include <stdlib.h>

    typedef struct data {
        int dia, mes, ano;
    } Data;

    typedef struct local {
        char ender[81]; /* endereço do local de provas */
        int sala; /* numero sala */
        } Local;
    
    typedef struct notas {
        float geral; /* prova de conhecimentos gerais */
        float especifica; /* prova de conhecimentos*/
        } Notas;

    typedef struct candidato {
        int inscr; /* numero de inscricao */
        char nome[81]; /* nome do candidato */
        Data nasc; /* data de nascimento */
        Local *loc; /* local de prova */
        Notas nt; /* notas de prova */
} Candidato;


void DesenhaLinha();
void DesligaPrograma();
int main (){

    register int cnt = 0;
    int numeroDeCandidatos, opcao, aux;
    Candidato *candidatos;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9- Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de candidatos: ");
    scanf("%d",&numeroDeCandidatos);

    candidatos = (Candidato *) malloc (numeroDeCandidatos*sizeof(Candidato));
    
    for(cnt = 0; cnt < numeroDeCandidatos; cnt++)
    {
        printf("Preenchendo canditato %d\n",cnt+1);
        candidatos[cnt].loc = (Local *) malloc (sizeof(Local)); 
        DesenhaLinha();
        printf("Digite o numero do candidato: ");
        scanf("%d",&candidatos[cnt].inscr);
        printf("Digite o nome do candidato: ");
        scanf(" %[^\n]",&candidatos[cnt].nome);
        printf("Digite o dia do aniversario: ");
        scanf("%d",&candidatos[cnt].nasc.dia);
        printf("Digite o mes do aniversario: ");
        scanf("%d",&candidatos[cnt].nasc.mes);
        printf("Digite o ano do aniversario: ");
        scanf("%d",&candidatos[cnt].nasc.ano);
        printf("Digite o endereco do local de prova: ");
        scanf(" %[^\n]",&candidatos[cnt].loc->ender);
        printf("Digite o numero da sala do candidato: ");
        scanf("%d",&candidatos[cnt].loc->sala);
        printf("Digite a nota de conhecimento geral: ");
        scanf("%f",&candidatos[cnt].nt.geral);
        printf("Digite a nota de conhecimento especifico: ");
        scanf("%f",&candidatos[cnt].nt.especifica);
    }
    printf("\n\n");

    DesenhaLinha();
    printf("Escolha sua opcao: \n");
    printf("Alterar local do candidato [1]\n");
    printf("Imprimir dados [2]\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("De qual aluno aluno voce deseja alterar(numero de inscricao): ");
        scanf("%d",&aux);
        for(cnt = 0; cnt <numeroDeCandidatos;cnt++){
            if(aux == candidatos[cnt].inscr)
            {
                printf("Digite o novo numero da sala: ");
                scanf("%d",&candidatos[cnt].loc->sala);
                printf("Digite o novo endereco da sala: ");
                scanf(" %[^\n]",&candidatos[cnt].loc->ender);
            }
        }
        
        break;
    case 2:
        for(cnt = 0; cnt < numeroDeCandidatos; cnt++){
            printf("Numero do candidato: %d\n",candidatos[cnt].inscr);
            printf("Nome do candidato: %s\n",candidatos[cnt].nome);
            printf("Aniversario do candidato: %d/%d/%d\n",candidatos[cnt].nasc.dia,candidatos[cnt].nasc.mes,candidatos[cnt].nasc.ano);
            printf("Endereco do local de prova e numero da sala: %s, %d\n",candidatos[cnt].loc->ender,candidatos[cnt].loc->sala);
            printf("Nota especifica e geral do aluno: %.2f %.2f",candidatos[cnt].nt.especifica,candidatos->nt.geral);
        }
        break;
    }

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
