#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[3][6], i, j, soma=0, media=0;
for(i=0; i<3; i++){
    for(j=0;j<6;j++){
        printf("Digite o elemento presente na %iª linha e %iª colula da matriz: ", i+1, j+1);
        scanf("%i", &a[i][j]);
        if((j==1)||(j==3)||(j==5)){
            soma=soma+a[i][j];
        }
        if((j==1)||(j==3)){
            media=media+a[i][j];
        }
    }
}
printf("A matriz digitada foi: \n");
for(i=0; i<3; i++){
    for(j=0;j<6;j++){
            printf("%i ", a[i][j]);
    }
    printf("\n");
}

printf("A soma dos elementos das colunas impares da matriz é igual a: %i.\n", soma);
media=media/6;
printf("A media dos elementos da segunda coluna e da quarta coluna da matriz é igual a: %i.\n", media);
for(i=0; i<3; i++){
    for(j=5;j<6;j++){
            a[i][5]=a[i][1]+a[i][2];
    }
}
printf("O resultado final da matriz digitada é: \n");
for(i=0; i<3; i++){
    for(j=0;j<6;j++){
            printf("%i ", a[i][j]);
    }
    printf("\n");
}
return 0;
}
