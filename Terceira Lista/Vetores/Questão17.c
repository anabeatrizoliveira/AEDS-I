#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], i;
for(i=0; i<10; i++){
    printf("Digite um número: ");
    scanf("%i", &a[i]);
    if(a[i]<0){
        a[i]=0;
    }
}
for(i=0; i<10; i++){
    printf("%i\n", a[i]);
}
return 0;
}
