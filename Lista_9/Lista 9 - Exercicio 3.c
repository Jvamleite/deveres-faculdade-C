#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct assalariados {
        char nome[51];
        char sexo;
        int idade;
        float salario;
        char estado[3];
} Assalariados;


char * estado[27] =
{"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
"PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};
void DesenhaLinha();
void DesligaPrograma();
Assalariados* cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void imprime(Assalariados ** ptr, int numAssalariados);
void relatorio(Assalariados ** ptr, int numAssalariados);
int main (){

    Assalariados **pessoas;
    int numAssalariados = 3;
    register int cnt = 0;
    
    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9 - Exercicio 3\n");
    DesenhaLinha();
    printf("\n\n");

    pessoas = (Assalariados **) malloc (numAssalariados *sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);

    for(cnt = 0; cnt < numAssalariados;cnt++)
        free(pessoas[cnt]);
    free(pessoas);
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
Assalariados* cadastra(char *nome, char sexo, int idade, float salario, char *estado){

    Assalariados *a;
    
    a = (Assalariados *) malloc (sizeof(Assalariados));

    strcpy(a->nome,nome);
    a->sexo = sexo;
    a->idade = idade;
    a->salario = salario;
    strcpy(a->estado,estado);
    
    return a;
}
void imprime(Assalariados ** ptr, int numAssalariados){

    
    register int cnt = 0;

    for(cnt = 0; cnt < numAssalariados; cnt++){
        printf("Imprimindo salariado %d\n",cnt+1);
        printf("Nome: %s\n",ptr[cnt]->nome);
        printf("Sexo: %c\n",ptr[cnt]->sexo);
        printf("Idade: %d\n",ptr[cnt]->idade);
        printf("Salario: %.2f\n",ptr[cnt]->salario);
        printf("Estado: %s\n",ptr[cnt]->estado);
        DesenhaLinha();

    }
}
void relatorio(Assalariados ** ptr, int numAssalariados){

    register int cnt = 0, cnt2 = 0;
    int relatorio[27];
    char e[3];

    for(cnt = 0; cnt <27; cnt++)
        relatorio[cnt] = 0;

    for(cnt = 0; cnt < numAssalariados; cnt++){
        if(ptr[cnt]->idade>40 && ptr[cnt]->salario>1000.0){
            strcpy(e,ptr[cnt]->estado);
            for(cnt2 = 0; cnt2 < 27; cnt2++)
                if(strcmp(e,estado[cnt])==0)
                    relatorio[cnt2] += 1;
        }
    }

    for(cnt = 0; cnt < 27; cnt++){
        if(relatorio[cnt]==0)
            continue;
        printf("Estado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00",estado[cnt],relatorio[cnt]);
    }
    
}


