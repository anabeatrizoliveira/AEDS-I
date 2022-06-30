#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int  i;
float soma, x, d;
x=1;
d=1;
soma=0;

for(i=0;i<50;i++){
    soma=soma+(x/d);
    x=x+2.0;
    d++;
}
printf("%f", soma);
return 0;
}
