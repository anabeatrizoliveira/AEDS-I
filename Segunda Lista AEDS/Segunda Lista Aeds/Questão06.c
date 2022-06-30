#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma, media;
soma=0;
i=1;
printf("O programa calculará a média de 10 números.\n");
while(i<=10){
    printf("Digite um número: ");
    scanf("%d", &n);
    soma=soma+n;
    i++;
}
media=soma/10;
printf("A média dos 10 números digitados é igual à: %d", media);
return 0;
}
