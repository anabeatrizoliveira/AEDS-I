#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um número para calcular sua raíz quadrada: ");
scanf("%i", &a);
if(a>=0){
b=sqrt(a);
printf("A raíz quadrada deste número é %i.", b);
}
else if(a<0){
printf("O número é inválido.");
}
return 0;
}
