#include <stdio.h>
#include <stdlib.h>

    typedef struct Livro {
        int ano;
        char titulo[100];
        char autor[100];
        int nVolume; // Número de exemplares de um dado livro.
        float preco;
    }Livro;
    typedef struct Biblioteca {
        Livro **V; // Armazena a informação de n livros !!
        int nLivros // Número de livros existentes na biblioteca.
    }Biblioteca;

void DesenhaLinha();
void DesligaPrograma();
Livro* fillLivro();
Biblioteca* fillBiblioteca(int numLivro);
void valorBiblioteca (Biblioteca *bl, int numLivro);
Livro* maiorBiblioteca(Biblioteca *bl, int numLivro);
int main (){


    int numeroDeLivros;
    Biblioteca *b;
    Livro *l;


    //Professor depois me explica por favor o erro, o debugger é inutil, ou eu não sei usar, sei lá

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 9 - Exercicio 12\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o numero de livros que deseja registrar: ");
    scanf("%d",&numeroDeLivros);

    b = fillBiblioteca(numeroDeLivros);
    valorBiblioteca(b,numeroDeLivros);
    l = maiorBiblioteca(b,numeroDeLivros);
    printf("O livro %s eh o com maior numeros de exemplares\n",l->titulo);


    


    free(b);
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
Livro* fillLivro(){

    Livro *l;
    printf("Digite o ano do livro: ");
    scanf("%d",&l->ano);
    printf("Digite o titulo do livro: ");
    scanf(" %[^\n]",&l->titulo);
    printf("Digite o autor do livro: ");
    scanf(" %[^\n]",&l->autor);
    printf("Digite o numero de exemplares: ");
    scanf(" %[^\n]",&l->nVolume);
    printf("Digite o preco do livro: ");
    scanf(" %[^\n]",&l->preco);

    return l;

}
Biblioteca* fillBiblioteca(int numLivros){

    Biblioteca *b;
    register int cnt = 0;

    b->V = (Livro**) malloc (numLivros*sizeof(Livro*));
    for(cnt = 0; cnt < numLivros; cnt++)
        b->V[cnt] = fillLivro();
    b->nLivros = numLivros;
}
void valorBiblioteca (Biblioteca *bl, int numLivro){

    int montanteGasto = 0;
    register int cnt = 0;

    for(cnt = 0; cnt <numLivro; cnt++)
        montanteGasto += bl->V[cnt]->preco;

    printf("O montante total gasto para formar essa biblioteca eh: %.2f\n",montanteGasto);
}
Livro* maiorBiblioteca(Biblioteca *bl, int numLivro){

    register int cnt = 0;
    int maiorNumeroDeExemplares = 0;
    Livro *l;

    for(cnt = 0; cnt < numLivro; cnt++){
        if(bl->nLivros>maiorNumeroDeExemplares)
        {
            maiorNumeroDeExemplares = bl->nLivros;
            l = bl->V[cnt];
        }
    }

    return l;

}
