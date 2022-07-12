#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5][5], i, j, x, y;
srand(time(NULL));
for(i=0; i<5; i++){
    for(j=0; j<5; j++){
        a[i][j]=rand() % 99;
        printf("%i ", a[i][j]);
    }
    printf("\n");
}
return 0;
}
