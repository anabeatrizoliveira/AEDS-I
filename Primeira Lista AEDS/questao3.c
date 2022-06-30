#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um número, se ele for positivos será calculado a raiz quadrada, se negativo, será impresso o número ao quadrado: ");
scanf("%i", &a);
if(a>=0){
b=sqrt(a);
printf("A raíz quadrada deste número é:  %i.", b);
}
else if(a<0){
b=pow(a,2);
printf("Este número elevado ao quadrado é igual a:  %i.", b);
}
return 0;
}
