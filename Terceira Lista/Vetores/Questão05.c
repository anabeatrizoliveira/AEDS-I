#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], count=0, i;
for(i=0;i<10;i++){
    printf("Digite um número: ");
    scanf("%i", &a[i]);
    if(a[i]%2==0){
        count++;
    }
}
for(i=0;i<10;i++){
        if(a[i]%2==0){
        printf("%i é par.\n", a[i]);
    }
}
printf("Foram digitados %i números pares.", count);
return 0;
}
