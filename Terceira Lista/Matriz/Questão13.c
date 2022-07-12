#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[4][4], i=0, j=0, soma=0;
for(i=0; i<4; i++){
    for(j=0; j<4; ){
        printf("Digite um número entre 1 e 20 para formar uma matriz 4x4: ");
        scanf("%i", &a[i][j]);
        if((a[i][j]>0)&&(a[i][j]<21)){
            j++;
        }
    }
}
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        if(i<j){
            a[i][j]=0;
        }
        printf("%i  ", a[i][j]);
        }
        printf("\n");
    }

return 0;
}
