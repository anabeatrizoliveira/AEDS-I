#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[4][4], b[4][4], c[4][4], i, j;
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       printf("Digite os valores dentro de sua primeira matriz: ");
       scanf("%i", &a[i][j]);
       }
    }
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       printf("Digite os valores dentro de sua segunda matriz: ");
       scanf("%i", &b[i][j]);
       }
    }

for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       if(a[i][j]>=b[i][j]){
        c[i][j]=a[i][j];
       }
       if(b[i][j]>a[i][j]){
        c[i][j]=b[i][j];
       }
    }
}
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       printf("%i  ", c[i][j]);
    }
    printf("\n");
}

return 0;
}
