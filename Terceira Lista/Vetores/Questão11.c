#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n[10], soma=0, negativo=0, i;
for(i=0; i<10; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &n[i]);
    if(n[i]<0){
        negativo++;
    }
    if (n[i]>=0){
        soma=soma+n[i];
    }
}
printf("Foram digitados %i números negativos e a soma dos números positivos é igual a: %i.", negativo, soma);
return 0;
}
