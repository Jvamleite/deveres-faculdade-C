#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    char operacao;
    float num1, num2;
    int resposta, aux;

    DesenhaLinha();
    printf("\tLista 1 - Exercecio 3\n");
    DesenhaLinha();
    printf("\n\n");

    while(1){
        printf("Digite a operacao que deseja realizar(+,-,/ ou *): ");
        scanf( "%c", &operacao);
        fflush(stdin);
        aux = 0;
        //Realiza a operacao desejada
        switch (operacao){
            case '+':
                DesenhaLinha();
                printf("Digite os numeros que deseja somar: ");
                scanf(" %f %f", &num1, &num2);
                DesenhaLinha();
                printf("A soma entre %.2f e %.2f eh %.2f\n",num1, num2, num1 + num2);
                DesenhaLinha();
                break;
            case '-':
                DesenhaLinha();
                printf("Digite os numeros que deseja subtrair: ");
                scanf(" %f %f", &num1, &num2);
                DesenhaLinha();
                printf("A diferenca entre %.2f e %.2f eh %.2f\n",num1, num2, num1 - num2);
                DesenhaLinha();
                break;
            case '/':
                DesenhaLinha();
                while (1){
                    printf("Digite os numeros que deseja dividir: ");
                    scanf(" %f %f", &num1, &num2);
                    if (num2 == 0){
                        printf("Por favor digite uma divisao valida\n");
                        continue;
                    }
                    break;
                }
                DesenhaLinha();
                printf("A razao entre %.2f e %.2f eh %.2f\n",num1, num2, num1 / num2);
                DesenhaLinha();
                break;
            case '*':
                DesenhaLinha();
                printf("Digite os numeros que deseja multiplicar: ");
                scanf(" %f %f", &num1, &num2);
                DesenhaLinha();
                printf("O produto entre %.2f e %.2f eh %.2f\n",num1, num2, num1 * num2);
                DesenhaLinha();
                break;
            default:
                DesenhaLinha();
                printf("Digite uma operacao valida!\n");
                aux = 1;
                break;
        };
        if (aux == 1)
            continue;
        printf("Voce deseja realizar mais alguma operacao: \n");
        printf("[1] Sim\n");
        printf("[2] Nao\n");
        scanf(" %d",&resposta);
        if (resposta == 2){
            DesligaPrograma();
            break;
        }
        fflush(stdin);
    };




};

void DesenhaLinha(){

printf("====================================\n");

};
void DesligaPrograma(){
    DesenhaLinha();
    printf("Fim do Programa. Desligando...");
    sleep(1);
    exit(0);

}