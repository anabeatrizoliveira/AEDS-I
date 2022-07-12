#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[4][4],  i, j, maior;
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       a[i][j]=i*j;
       printf("Digite os valores dentro de sua matriz: ");
       scanf("%i", &a[i][j]);
       if((i==0)&&(j==0)){
        maior=a[i][j];
        }
        else if(maior<a[i][j]){
            maior=a[i][j];
        }
       }
    }
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       printf("%i  ", a[i][j]);
    }
    printf("\n");
}
printf("O maior elemento desta matriz é o %i.", maior);
return 0;
}
