#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int dia;
printf("Digite um número de 1 a 7: ");
scanf("%i", &dia);
switch(dia){
case 1 :
printf("Domingo");
break;
case 2 :
printf("Segunda-Feira");
break;
case 3 :
printf("Terça-Feira");
break;
case 4 :
printf("Quarta-Feira");
break;
case 5 :
printf("Quinta-Feira");
break;
case 6 :
printf("Sexta-Feira");
break;
case 7 :
printf("Sábado");
break;
default:
printf("Digite um valor válido.");
}
return 0;
}
