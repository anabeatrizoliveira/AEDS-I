#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i;
float media, soma, n;
soma=0;
i=1;
printf("O programa calculará a média de 10 números.\n");
while(i<=10){
printf("Digite um número: ");
scanf("%f", &n);
if(n>=0){
    soma=soma+n;
}
i++;
}
media=soma/10;
printf("A média dos 10 números digitados considerando apenas os positivos é igual à: %.2f", media);
return 0;
}
