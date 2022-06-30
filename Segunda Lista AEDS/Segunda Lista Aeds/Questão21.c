#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n1, n2, soma, multiplicacao, par, impar;
soma=0;
multiplicacao=1;
printf("Digite o primeiro número: ");
scanf("%i", &n1);
printf("Digite o segundo número: ");
scanf("%i", &n2);
for(i=n1;i<=n2;i++){
    if(i%2==0){
        soma=soma+i;
    }
    if(i%2!=0){
        multiplicacao=multiplicacao*i;
    }
}
printf("A soma dos numeros é igual a %i e a multiplicação é igual a %i.", soma, multiplicacao);
return 0;
}
