#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], b[10], c[10], i;
for(i=0; i<10; i++){
    printf("Digite o %iº número do vetor A: ", i+1);
    scanf("%i", &a[i]);
}
for(i=0; i<10; i++){
    printf("Digite o %iº número do vetor B: ", i+1);
    scanf("%i", &b[i]);
}
printf("O vetor C é igual a: \n");
for(i=0; i<10; i++){
    c[i]=a[i]-b[i];
    printf("%i\n", c[i]);
}
  return 0;
}
