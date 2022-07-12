#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], b[10], c[20], i, j, x;
j=0;
x=0;
for(i=0; i<10; i++){
    printf("Digite o %iº número do vetor A: ", i+1);
    scanf("%i", &a[i]);
}
for(i=0; i<10; i++){
    printf("Digite o %iº número do vetor B: ", i+1);
    scanf("%i", &b[i]);
}
for(i=0; i<20; i++){
    if(i%2==0){
    c[i]=a[j];
    j++;
    }
    else if(i%2==1){
    c[i]=b[x];
    x++;
}
printf("C[%i]: %i\n", i, c[i]);
}
  return 0;
}
