#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n, mod;
printf("Digite um número de 100 até 999: ");
scanf("%i", &n);
if((n>99)&&(n<1000)){
for(i=0;i<3;i++){
mod=n%10;
n=n/10;
printf("%i \n", mod);
}
}
return 0;
}
