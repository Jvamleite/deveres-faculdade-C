#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
int main (){

    
    //Titulo do programa
    DesenhaLinha();
    printf("\tLista 3 - Exercicio 13\n");
    DesenhaLinha();
    printf("\n\n");

    int a,b,c,d;
    float e,f,g,h;
    char v[10];
    int x;
    int *pa = &a;

    do{
        pa++;
        printf("Conteudo do endereco de pa: %d\n",*pa);
        if (pa == &b){
            printf("Endereco de pa e b coincindiram\n");
            printf("%d == %d\n",pa,&b);
            sleep(1);
        }
        if (pa == &c){
            printf("Endereco de pa e c coincindiram\n");
            printf("%d == %d\n",pa,&c);
            sleep(1);
        }
        if (pa == &d){
            printf("Endereco de pa e d coincindiram\n");
            printf("%d == %d\n",pa,&d);
            sleep(1);
        }
        if (pa == &e){
            printf("Endereco de pa e e coincindiram\n");
            printf("%d == %d\n",pa,&e);
            sleep(1);
        }
        if (pa == &f){
            printf("Endereco de pa e f coincindiram\n");
            printf("%d == %d\n",pa,&f);
            sleep(1);
        }
        if (pa == &g){
            printf("Endereco de pa e g coincindiram\n");
            printf("%d == %d\n",pa,&g);
            sleep(1);
        }
        if (pa == &h){
            printf("Endereco de pa e h coincindiram\n");
            printf("%d == %d\n",pa,&h);
            sleep(1);
        }
        if (pa == &v){
            printf("Endereco de pa e v coincindiram\n");
            printf("%d == %d\n",pa,v);
            sleep(1);
        }
        if (pa == &x){
            printf("Endereco de pa e x coincindiram\n");
            printf("%d == %d\n",pa,&x);
            sleep(1);
        }

    } while (pa != &v);
    
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