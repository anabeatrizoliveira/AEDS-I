#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, soma;
soma=0;
printf("Digite um n�mero: ");
scanf("%i", &n);
while(n>0){
soma=soma+n%10;
n=n/10;
}
printf("A soma de todos os algarismos deste n�mero � igual a: %i", soma);
return 0;
}
