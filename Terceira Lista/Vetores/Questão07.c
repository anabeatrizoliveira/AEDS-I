#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], maior=0, menor=0, i, posi;
for(i=0;i<10;i++){
printf("Digite um número: ");
scanf("%i", &a[i]);
if(i==0){
maior=a[i];
posi=i;
}
else if(maior<a[i]){
maior=a[i];
posi=i;
}
}
printf("O maior número digitado foi: %i, e a posição dele é: %i.", maior, posi);
return 0;
}
