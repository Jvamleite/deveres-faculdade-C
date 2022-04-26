#include <stdio.h>
#include <locale.h>

void linha();
int main (){

    //Determina o portugu�s como lingua padr�o pro programa
    setlocale(LC_ALL,"Portuguese");

    char operacao;
    float num1, num2;
    int resposta;

    printf("\tLista 1 - Exerc�cio 3\n\n");

    while(1){
        printf("Digite a opera��o que deseja realizar(+,-,/ ou *): ");
        scanf("%c", &operacao);
        fflush(stdin);
        //Realiza a opera��o desejada
        switch (operacao){
            case '+':
                linha();
                printf("Digite os n�meros que deseja somar: ");
                scanf("%f %f", &num1, &num2);
                printf("A soma entre %.2f e %.2f � %.2f\n",num1, num2, num1 + num2);
                break;
            case '-':
                linha();
                printf("Digite os n�meros que deseja subtrair: ");
                scanf("%f %f", &num1, &num2);
                printf("A diferen�a entre %.2f e %.2f � %.2f\n",num1, num2, num1 - num2);
                break;
            case '/':
                linha();
                while (1){
                    printf("Digite os n�meros que deseja dividir: ");
                    scanf("%f %f", &num1, &num2);
                    if (num2 == 0){
                        printf("Por favor digite uma divis�o v�lida\n");
                        continue;
                    }
                    break;
                }
                printf("A raz�o entre %.2f e %.2f � %.2f\n",num1, num2, num1 / num2);
                break;
            case '*':
                linha();
                printf("Digite os n�meros que deseja multiplicar: ");
                scanf("%f %f", &num1, &num2);
                printf("O produto entre %.2f e %.2f � %.2f\n",num1, num2, num1 * num2);
                break;
            default:
                printf("Digite uma opera��o v�lida!\n");
                break;
        };

        printf("Voc� deseja realizar mais alguma opera��o: \n");
        printf("[1] Sim\n");
        printf("[2] N�o\n");
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
