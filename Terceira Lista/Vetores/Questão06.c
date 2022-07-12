#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], maior=0, menor=0, i;
for(i=0;i<10;i++){
    printf("Digite um número: ");
    scanf("%i", &a[i]);
    if(i==0){
        maior=a[i];
    }
    else if(maior<a[i]){
        maior=a[i];
    }
    if(i==0){
        menor=a[i];
    }
    else if(menor>a[i]){
        menor=a[i];
    }
}
printf("O maior número digitado foi: %i, e o menor número digitado foi: %i.", maior, menor);
return 0;
}
