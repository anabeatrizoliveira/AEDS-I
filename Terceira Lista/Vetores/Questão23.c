#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[5], b[5], soma=0, i;
for(i=0; i<5; i++){
    printf("Digite o %iº número do primeiro vetor: ", i+1);
    scanf("%i", &a[i]);
    printf("Digite o %iº número do segundo vetor: ", i+1);
    scanf("%i", &b[i]);
    soma=soma+(a[i]*b[i]);
}
printf("O produto escalar dos vetores é igual a: %i.", soma);
  return 0;
}
