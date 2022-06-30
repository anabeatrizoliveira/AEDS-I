#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma;
i=1;
n=0;
soma=0;
while(i<=25){
    n=n+2;
    soma=soma+n;
    i++;
}
printf("%i", soma);
return 0;
}
