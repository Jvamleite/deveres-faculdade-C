#include <stdio.h>
#include <stdlib.h>
#define MAX 80

void DesenhaLinha();
void DesligaPrograma();
int main (){

    char linhaDeCaracteres[MAX], stringAuxiliar[MAX];
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 7 - Exercicio 5\n");
    DesenhaLinha();
    printf("\n\n");
    
    printf("Digite uma frase: ");
    scanf("%[^\n]",&linhaDeCaracteres);
 
    for(cnt = 0; cnt < MAX; cnt++)
        if(linhaDeCaracteres[cnt] != ' ')
            stringAuxiliar[cnt] = linhaDeCaracteres[cnt];
    for(cnt = 0; cnt < MAX; cnt+=6)
    {
        if(stringAuxiliar[cnt] == '\0')
            break;
        stringAuxiliar[cnt] = (char)((int)stringAuxiliar[cnt]+1);
        stringAuxiliar[cnt+1] = (char)((int)stringAuxiliar[cnt+1]+2);
        stringAuxiliar[cnt+2] = (char)((int)stringAuxiliar[cnt+2]+3);
        stringAuxiliar[cnt+3] = (char)((int)stringAuxiliar[cnt+3]+4);
        stringAuxiliar[cnt+4] = (char)((int)stringAuxiliar[cnt+4]+5);
    }

    for(cnt = 0; cnt < MAX; cnt++){
        if(stringAuxiliar[cnt] == '\0')
            break;
        printf("%c",stringAuxiliar[cnt]);
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
