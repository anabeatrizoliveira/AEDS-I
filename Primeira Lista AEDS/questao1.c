#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um n�mero: ");
scanf("%i", &a);
printf("Digite um outro n�mero: ");
scanf("%i", &b);
if(a>b){
printf("O primeiro n�mero digitado, %i, � o maior que o segundo, %i.", a, b);
}
else if(a<b){
printf("O segundo n�mero digitado, %i, � o maior que o primeiro, %i.", b, a);
}
else if (a=b){
printf("Os dois n�meros s�o iguais.");
}
return 0;
}
