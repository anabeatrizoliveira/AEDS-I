#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
setlocale (LC_ALL, "Portuguese");
int valor, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
printf("Digite o valor inteiro que será sacado: ");
scanf("%i", &valor);
if(valor>99){
n100=valor/100;
valor=valor-100*n100;
}
if(valor>49){
n50=valor/50;
valor=valor-50*n50;
}
if(valor>19){
n20=valor/20;
valor=valor-20*n20;
}
if(valor>9){
n10=valor/10;
valor=valor-10*n10;
}
if(valor>4){
n5=valor/5;
valor=valor-5*n5;
}
if(valor>1){
n2=valor/2;
valor=valor-2*n2;
}
if(valor>0){
n1=valor/1;
valor=valor-1*n1;
}

printf("O saque sera realizado em %i notas de R$100,00, %i notas de R$50,00, %i notas de R$20,00, %i notas de R$10,00, %i notas de R$5,00, %i notas de R$2,00 e  %i notas de R$1,00.", n100, n50, n20, n10, n5, n2, n1);
    return 0;
}
