#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n[10], soma=0, negativo=0, i;
for(i=0; i<10; i++){
    printf("Digite o %i� n�mero: ", i+1);
    scanf("%i", &n[i]);
    if(n[i]<0){
        negativo++;
    }
    if (n[i]>=0){
        soma=soma+n[i];
    }
}
printf("Foram digitados %i n�meros negativos e a soma dos n�meros positivos � igual a: %i.", negativo, soma);
return 0;
}
