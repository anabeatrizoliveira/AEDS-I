#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int ano;
printf("Digite um ano: ");
scanf("%i", &ano);
if (((ano%4==0)&&(ano%100!=0))||(ano%400==0)){
printf("Este � um ano bissexto.");
}
else {
printf("Este n�o � um ano bissexto.");
}
return 0;
}
