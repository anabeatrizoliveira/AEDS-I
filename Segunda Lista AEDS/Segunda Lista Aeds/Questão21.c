#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n1, n2, soma, multiplicacao, par, impar;
soma=0;
multiplicacao=1;
printf("Digite o primeiro n�mero: ");
scanf("%i", &n1);
printf("Digite o segundo n�mero: ");
scanf("%i", &n2);
for(i=n1;i<=n2;i++){
    if(i%2==0){
        soma=soma+i;
    }
    if(i%2!=0){
        multiplicacao=multiplicacao*i;
    }
}
printf("A soma dos numeros � igual a %i e a multiplica��o � igual a %i.", soma, multiplicacao);
return 0;
}
