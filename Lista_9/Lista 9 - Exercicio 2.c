#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9- Exercicio 2\n");
    DesenhaLinha();
    printf("\n\n");

    setlocale(LC_ALL,"portuguese");

    printf("a - na declaração do segundo ponteiro, faltou o asteristico, sinalizando que a variavel inicializada é um ponteiro, logo isso geraria um erro de compilação, já que tentariamos alocar dinamicante um struct\n");
    
    printf("b - 6, ele imprimirá o tamanho da string nomeMes que é quantidade de caracteres na palavra março mas o carctere do final da string\n");


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
