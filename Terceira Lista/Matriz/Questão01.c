#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[4][4], cont=0, i, j;
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("Digite os valores da matriz: ");
        scanf("%i", &a[i][j]);
    }
}
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        if(a[i][j]>10){
            cont++;
        }
    printf("%i  ", a[i][j]);
    }
    printf("\n");
}
printf("Na matriz foram digitados %i números maiores que 10.", cont);
return 0;
}
