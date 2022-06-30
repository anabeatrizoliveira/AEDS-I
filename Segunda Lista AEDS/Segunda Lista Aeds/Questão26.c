#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n;
printf("Digite um número: ");
scanf("%i", &n);
for(i=n;i>=n;i++){
    if((i%11==0)||(i%13==0)||(i%17==0)){
        printf("O primeiro multiplo após o número %i de 11, 13 ou 17 é: %i.", n, i);
        break;
    }
}
return 0;
}
