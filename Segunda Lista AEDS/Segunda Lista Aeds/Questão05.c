#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma;
soma=0;
i=1;
while(i<=10){
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    soma=soma+n;
    i++;
}
printf("A soma dos 10 n�meros digitados � igual �: %d", soma);
return 0;
}
