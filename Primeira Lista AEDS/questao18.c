#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a, b, n1, n2;
printf("Digite o número que corresponde a operação que deseja fazer. \n 1 - Adição \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n");
scanf ("%f", &a);
printf("Digite o primeiro valor: ");
scanf("%f", &n1);
printf("Digite o segundo valor: ");
scanf("%f", &n2);
if(a==1){
b=n1+n2;
printf("A soma de %f com %f é igual a %.2f.", n1, n2, b);
}
else if(a==2){
b=n1-n2;
printf("A subtração de %f com %f é igual a %.2f.", n1, n2, b);
}
else if(a==3){
b=n1*n2;
printf("A multiplicação de %f com %f é igual a %.2f.", n1, n2, b);
}
else if(a==4){
b=n1/n2;
printf("A subtração de %f com %f é igual a %.2f.", n1, n2, b);
}
else{
printf("Digite uma operação válida.");
}
return 0;
}
