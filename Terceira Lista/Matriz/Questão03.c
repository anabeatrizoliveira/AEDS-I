#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[4][4],  i, j;
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
       a[i][j]=i*j;
       printf("%i  ", a[i][j]);
    }
    printf("\n");
}
return 0;
}
