#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, impar;
printf("Digite um número inteiro: ");
scanf("%i", &n);
i=n;
while(i>=0){
    printf("%i ", i);
    i--;
}
return 0;
}
