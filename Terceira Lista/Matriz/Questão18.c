#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[3][3], b[3], i, j;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("Digite os elementos que estarão na matriz: ");
        scanf("%i", &a[i][j]);
    }
}
printf("A matris digitada foi: \n");
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
            printf("%i ", a[i][j]);
    }
    printf("\n");
}
for(j=0; j<3; j++){
    b[j]=0;
    for(i=0; i<3; i++){
        b[j]=b[j]+a[i][j];
    }
    printf("A soma da %iª coluna é igual a: %i\n", j+1, b[j]);
}
return 0;
}
