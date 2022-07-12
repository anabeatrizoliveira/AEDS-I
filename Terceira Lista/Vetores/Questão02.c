#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[6], i;
for(i=0;i<6;i++){
    printf("Informe um número:");
    scanf("%i", &a[i]);
}
for(i=0;i<6;i++){
    printf("%i \n", a[i]);
}
return 0;
}
