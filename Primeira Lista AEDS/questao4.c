#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a,b;
printf("Digite um número positivo: ");
scanf("%f", &a);
if(a>=0){
b=sqrt(a);
printf("A raíz quadrada deste número é:  %.2f.\n", b);
b=pow(a,2);
printf("Este número elevado ao quadrado é igual a:  %.2f.", b);
}
else if(a<0){
printf("O número é inválido.");
}
return 0;
}
