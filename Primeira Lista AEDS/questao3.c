#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um n�mero, se ele for positivos ser� calculado a raiz quadrada, se negativo, ser� impresso o n�mero ao quadrado: ");
scanf("%i", &a);
if(a>=0){
b=sqrt(a);
printf("A ra�z quadrada deste n�mero �:  %i.", b);
}
else if(a<0){
b=pow(a,2);
printf("Este n�mero elevado ao quadrado � igual a:  %i.", b);
}
return 0;
}
