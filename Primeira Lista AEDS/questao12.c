#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a,b;
printf("Digite um n�mero para calcular o logaritmo natural: ");
scanf("%f", &a);
if(a<0){
printf("O n�mero � inv�lido.");
}
else if(a>0){
    b=log(a);
printf("O logaritmo natural do n�mero � igual a %.2f", b);
}
return 0;
}
