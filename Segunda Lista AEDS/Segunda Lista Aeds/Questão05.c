#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma;
soma=0;
i=1;
while(i<=10){
    printf("Digite um número: ");
    scanf("%d", &n);
    soma=soma+n;
    i++;
}
printf("A soma dos 10 números digitados é igual à: %d", soma);
return 0;
}
