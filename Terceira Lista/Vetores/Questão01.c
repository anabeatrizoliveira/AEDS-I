#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int A[6], soma=0, i;
A[0]=1;
A[1]=0;
A[2]=5;
A[3]=-2;
A[4]=-5;
A[5]=7;
for(i=0;i<6;i++){
soma=soma+A[i];
}
printf("Soma de 1+0+5+(-2)+(-5)+7 é igual a: %i.\n", soma);
A[4]=100;
for(i=0;i<6;i++){
printf("%i \n",A[i]);
}
return 0;
}
