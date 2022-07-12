#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int  i;
float media, desviopadrao, v[10], somatorio=0, soma=0, j;
for(i=0; i<10; i++){
    printf("Digite o %iº número do vetor: ", i+1);
    scanf("%f", &v[i]);
    soma=soma+v[i];
}
media=soma/10;
for(i=0; i<10; i++){
    somatorio=somatorio+pow((v[i]-media),2);
}
j=1/(10-1);
desviopadrao=sqrt(j*somatorio);
printf("O desvio padrão é igual a: %.2f.", desviopadrao);
return 0;
}
