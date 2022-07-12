#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10][10], i, j;
for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        if(i<j){
            a[i][j]=2*i+7*j-2;
        }
        if(i>j){
            a[i][j]=((3*i)*(3*i))-1;
        }
        if(i==j){
            a[i][j]=((4*i)*(4*i)*(4*i))-((5*j)*(5*j))+1;
        }
    }
}
for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        printf("%i ", a[i][j]);
            }
        printf("\n");
    }

return 0;
}
