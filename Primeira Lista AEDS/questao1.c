#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um número: ");
scanf("%i", &a);
printf("Digite um outro número: ");
scanf("%i", &b);
if(a>b){
printf("O primeiro número digitado, %i, é o maior que o segundo, %i.", a, b);
}
else if(a<b){
printf("O segundo número digitado, %i, é o maior que o primeiro, %i.", b, a);
}
else if (a=b){
printf("Os dois números são iguais.");
}
return 0;
}
