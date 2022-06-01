#include <stdio.h>
#include <stdlib.h>

void DesenhaLinha();
void DesligaPrograma();
void BubbleSort(char *v, int n);
int Separa (char *v, int p, int r);
void QuickSort (char *v, int p, int r);
int comparador (const void *a, const void *b);
int main (){

    char *vetor;
    int n;
    register int cnt = 0;

    //Titulo do programa
    DesenhaLinha();
    printf("\tLista  8 - Exercicio 1\n");
    DesenhaLinha();
    printf("\n\n");

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vetor = (char *) malloc (n*sizeof(char));

    for(cnt = 0; cnt < n; cnt ++){
        printf("Digite o %d elemento: ", cnt+1);
        scanf(" %c",&vetor[cnt]);
    }

    //BubbleSort(vetor,n);

    //QuickSort(vetor, 0, n -1);

    //Programa tava funcionando certinho até eu tentar com o qsort
    qsort(vetor, n, sizeof(char), comparador);

    printf("Lista ordenada: \n");
    for(cnt = 0; cnt < n; cnt ++)
        printf("%c ", vetor[cnt]);
    printf("\n");



    



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
void BubbleSort(char *v, int n){

    register int cnt = 0, cnt2 = 0, aux;

    for(cnt = n - 1; cnt > 0; cnt-- ){
        for (cnt2 = 0; cnt2 < cnt; cnt2++ ){
            if (v[cnt2] > v[cnt2+1]){
                aux = v[cnt2];
                v[cnt2] = v[cnt2+1];
                v[cnt2+1] = aux;
            }
        }
    }
}
int Separa (char *v, int p, int r){

    char c = v[r], aux;
    int cnt, cnt2 = p;

    for(cnt = p; cnt < r; cnt++)
        if(v[cnt] <= c){
            aux = v[cnt2];
            v[cnt2] = v[cnt];
            v[cnt] = aux;
            cnt2++;
        }
    aux = v[cnt2];
    v[cnt2] = v[r];
    v[r] = aux;

    return cnt2;

}
void QuickSort (char *v, int p, int r){

    while (p < r) {      
      int j = Separa (v, p, r);    
      if (j - p < r - j) {     
         QuickSort (v, p, j-1);
         p = j + 1;            
      } else {                 
         QuickSort (v, j+1, r);
         r = j - 1;
      }
   }
}
int comparador(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}