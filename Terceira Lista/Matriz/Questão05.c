#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5][5],  i, j, x, flag=0;
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
       a[i][j]=i*j;
       printf("Digite os valores dentro de sua matriz: ");
       scanf("%i", &a[i][j]);
       }
    }
printf("Digite um valor para ser encontrado dentro da matriz: ");
scanf("%i", &x);
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
       printf("%i  ", a[i][j]);
    }
    printf("\n");
}
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
       if(x==a[i][j]){
        printf("O valor %i é encontrado na matriz na posição A[%i][%i]\n", x, i, j);
        flag++;
       }
    }

}
if(flag==0){
    printf("Elemento não encontrado.");
}

return 0;
}
