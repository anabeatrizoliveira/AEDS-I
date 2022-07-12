#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], b[10], i;
for(i=0;i<10;i++){
    printf("Digite um número: ");
    scanf("%i", &a[i]);
}
for(i=0;i<10;i++){
    b[i]=a[i]*a[i];
    printf("O quadrado de %i é igual a %i.\n", a[i], b[i]);
}
return 0;
}
