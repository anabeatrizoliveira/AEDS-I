#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, soma, n;
soma=0;
printf("Digite um número: ");
scanf("%i", &n);
for(i=1;i<n;i++){
    if(n%i==0){
        soma=soma+i;
    }
}
printf("A soma dos divisores deste número é: %i", soma);
return 0;
}
