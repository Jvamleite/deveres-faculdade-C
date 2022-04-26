#include <stdio.h>
#include <locale.h>

void linha();
int main (){

    //Determina o português como lingua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    char operacao;
    float num1, num2;
    int resposta;

    printf("\tLista 1 - Exercício 3\n\n");

    while(1){
        printf("Digite a operação que deseja realizar(+,-,/ ou *): ");
        scanf("%c", &operacao);
        fflush(stdin);
        //Realiza a operação desejada
        switch (operacao){
            case '+':
                linha();
                printf("Digite os números que deseja somar: ");
                scanf("%f %f", &num1, &num2);
                printf("A soma entre %.2f e %.2f é %.2f\n",num1, num2, num1 + num2);
                break;
            case '-':
                linha();
                printf("Digite os números que deseja subtrair: ");
                scanf("%f %f", &num1, &num2);
                printf("A diferença entre %.2f e %.2f é %.2f\n",num1, num2, num1 - num2);
                break;
            case '/':
                linha();
                while (1){
                    printf("Digite os números que deseja dividir: ");
                    scanf("%f %f", &num1, &num2);
                    if (num2 == 0){
                        printf("Por favor digite uma divisão válida\n");
                        continue;
                    }
                    break;
                }
                printf("A razão entre %.2f e %.2f é %.2f\n",num1, num2, num1 / num2);
                break;
            case '*':
                linha();
                printf("Digite os números que deseja multiplicar: ");
                scanf("%f %f", &num1, &num2);
                printf("O produto entre %.2f e %.2f é %.2f\n",num1, num2, num1 * num2);
                break;
            default:
                printf("Digite uma operação válida!\n");
                break;
        };

        printf("Você deseja realizar mais alguma operação: \n");
        printf("[1] Sim\n");
        printf("[2] Não\n");
        scanf("%d",&resposta);
        if (resposta == 2)
            break;
        fflush(stdin);

    };




};

void linha(){

//Imprime uma linha no console

printf("====================================\n");

};
