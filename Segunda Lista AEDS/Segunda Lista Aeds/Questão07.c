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
printf("O programa calcular� a m�dia de 10 n�meros.\n");
while(i<=10){
printf("Digite um n�mero: ");
scanf("%f", &n);
if(n>=0){
    soma=soma+n;
}
i++;
}
media=soma/10;
printf("A m�dia dos 10 n�meros digitados considerando apenas os positivos � igual �: %.2f", media);
return 0;
}
