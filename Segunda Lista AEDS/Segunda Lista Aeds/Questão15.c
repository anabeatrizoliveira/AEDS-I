#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, impar;
printf("Digite um n�mero inteiro: ");
scanf("%i", &n);
i=1;
while(i<=n){
printf("%i ", i);
i=i+2;
}
return 0;
}
