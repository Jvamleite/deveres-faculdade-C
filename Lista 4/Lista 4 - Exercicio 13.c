#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 50
#define LTR 26

void DesenhaLinha();
void DesligaPrograma();
int main (){



    char recebeString[MAX];
    register int cnt = 0, tam;
    int estatistica[LTR];


    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 4 - Exercicio 13\n");
    DesenhaLinha();
    printf("\n\n");

    for(cnt = 0; cnt < LTR; cnt++)
        estatistica[cnt] = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]",&recebeString);

    for(cnt = 0; cnt < MAX; cnt++){
        recebeString[cnt] = toupper(recebeString[cnt]);
        if (recebeString[cnt] == '\0')
            break;
        if (recebeString[cnt] == ' ')
            continue;
        switch ((int)recebeString[cnt])
        {
        case 65:
            estatistica[0] += 1;
            break;
        case 66:
            estatistica[1] += 1;
            break;
        case 67:
            estatistica[2] += 1;
            break;
        case 68:
            estatistica[3] += 1;
            break;
        case 69:
            estatistica[4] += 1;
            break;
        case 70:
            estatistica[5] += 1;
            break;
        case 71:
            estatistica[6] += 1;
            break;
        case 72:
            estatistica[7] += 1;
            break;
        case 73:
            estatistica[8] += 1;
            break;
        case 74:
            estatistica[9] += 1;
            break;
        case 75:
            estatistica[10] += 1;
            break;
        case 76:
            estatistica[11] += 1;
            break;
        case 77:
            estatistica[12] += 1;
            break;
        case 78:
            estatistica[13] += 1;
            break;
        case 79:
            estatistica[14] += 1;
            break;
        case 80:
            estatistica[15] += 1;
            break;
        case 81:
            estatistica[16] += 1;
            break;
        case 82:
            estatistica[17] += 1;
            break;
        case 83:
            estatistica[18] += 1;
            break;
        case 84:
            estatistica[19] += 1;
            break;
        case 85:
            estatistica[20] += 1;
            break;
        case 86:
            estatistica[21] += 1;
            break;
        case 87:
            estatistica[22] += 1;
            break;
        case 88:
            estatistica[23] += 1;
            break;
        case 89:
            estatistica[24] += 1;
            break;
        case 90:
            estatistica[25] += 1;
            break;
        }
    }

    for(cnt = 0; cnt < LTR; cnt++){
        if (estatistica[cnt] == 0)
            continue;
        printf("'%c'= %d\n",recebeString[cnt], estatistica[cnt]);
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
