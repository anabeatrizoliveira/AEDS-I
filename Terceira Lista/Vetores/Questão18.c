#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], i, x;
for( i=0; i<10; i++){
    printf("Digite um n�mero: ");
    scanf("%i", &a[i]);
}
printf("Digite um n�mero qualquer: ");
scanf("%i", &x);

for( i=0; i<10; i++){
    if(a[i]%x==0){
        printf("O elemento presente no vetor a[%i]:%i � divis�vel por %i.\n", i, a[i], x);
    }
}
return 0;
}
