#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, soma, n;
soma=0;
printf("Digite um n�mero: ");
scanf("%i", &n);
for(i=1;i<n;i++){
    if(n%i==0){
        soma=soma+i;
    }
}
printf("A soma dos divisores deste n�mero �: %i", soma);
return 0;
}
