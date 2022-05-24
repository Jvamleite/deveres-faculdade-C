#include <stdio.h>
#include <locale.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Declara o português como língua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 4\n");
    DesenhaLinha();
    printf("\n\n");

    printf("3. Qual é a saída deste programa supondo que i ocupa o endereço 4094 na memória?\n\n");
    printf("main(){\n");
    printf("int i = 5, *p;\n");
    printf("p = &i;\n");
    printf("printf(%%x %%d %%d\\n ), p, *p+2, 3**p");

    printf("%%x = endereço(4094) em hexadecimal - FFE");
    printf("%%d = numero que p aponta(5) + 2 - 7");
    printf("%%d = 3 * o numero que p aponta(5) - 15");


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