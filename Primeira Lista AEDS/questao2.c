#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a,b;
printf("Digite um n�mero para calcular sua ra�z quadrada: ");
scanf("%i", &a);
if(a>=0){
b=sqrt(a);
printf("A ra�z quadrada deste n�mero � %i.", b);
}
else if(a<0){
printf("O n�mero � inv�lido.");
}
return 0;
}
