#include <stdio.h>
#include <locale.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    //Declara o português como língua padrão pro programa
    setlocale(LC_ALL,"Portuguese");

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 8\n");
    DesenhaLinha();
    printf("\n\n");

    printf("8. Qual é o resultado do seguinte programa?\n\n");
    printf("#include <conio.h>n");
    printf("#include <stdio.h>\n");
    printf("void main(){\n");
    printf("float vet[5] = {1.1,2.2,3.3,4.4,5.5};\n");
    printf("float *f;\n");
    printf("int i;\n");
    printf("f = vet;\n");
    printf("printf('contador/valor/valor/endereco/endereco');");
    printf("for(i = 0 ; i <= 4 ; i++){");
    printf("    printf('\\ni = %%d',i);");
    printf("    printf(' vet[%%d] = %%.1f',i, vet[i]);");
    printf("    printf(' *(f + %%d) = %%.1f',i, *(f+i));");
    printf("    printf(' &vet[%%d] = %%X',i, &vet[i]);");
    printf("    printf(' (f + %%d) = %%X',i, f+i);");

    printf("Resposta: Ele imprime 5 linhas, onde em cada uma ele imprime o valor atual do contador,\n");
    printf("o valor do vetor vet armazenado na variavel de indice i\n");
    printf("Esse mesmo valor de cima, porém agora acessando o valor inicial do vetor(*f) mais o contador(i)");
    printf("Depois, ele imprime o endereço de memoria da variavel vet[i] em hexadecimal\n");
    printf("E por fim, o mesmo valor de cima, porém acessando diretamente pelo ponteiro");

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