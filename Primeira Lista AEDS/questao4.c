#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a,b;
printf("Digite um n�mero positivo: ");
scanf("%f", &a);
if(a>=0){
b=sqrt(a);
printf("A ra�z quadrada deste n�mero �:  %.2f.\n", b);
b=pow(a,2);
printf("Este n�mero elevado ao quadrado � igual a:  %.2f.", b);
}
else if(a<0){
printf("O n�mero � inv�lido.");
}
return 0;
}
