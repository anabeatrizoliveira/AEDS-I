#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10][10], i, j, soma=0;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("Digite os valores presentes na matriz: ");
        scanf("%i", &a[i][j]);
        if(i>j){
            soma=soma+a[i][j];
        }
    }
}
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%i ", a[i][j]);
            }
        printf("\n");
    }
printf("A soma dos elementos que estão acima da diagonal principal é: %i.", soma);
return 0;
}
