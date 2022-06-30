#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma;
printf("Digite um número: ");
scanf("%i", &n);
i=0;
soma=0;
while(i<=n){
soma=soma+i;
i++;
}
printf("%i", soma);
return 0;
}
