#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma, media;
soma=0;
i=1;
printf("O programa calcular� a m�dia de 10 n�meros.\n");
while(i<=10){
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    soma=soma+n;
    i++;
}
media=soma/10;
printf("A m�dia dos 10 n�meros digitados � igual �: %d", media);
return 0;
}
