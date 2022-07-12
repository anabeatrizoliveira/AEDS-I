#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
  int a[10], cont, valor, i, j;
  cont=0;
  for (i=0 ; i<10; i++){
    printf("Digite um número de 0 a 50: ");
    scanf("%i", &a[i]);
        if(a[i]%2==1){
            cont++;
        }
  }
  int b[cont];
  j=0;
  for(i=0; i<10;i++){
    if(a[i]%2==1){
      b[j]=a[i];
      j++;
    }
  }
  printf("Primeiro vetor: ");
  for(i=0; i<10; i++){
    printf("%i ", a[i]);
  }
  printf("Segundo vetor: ");
  for(i=0; i<cont; i++){
    printf("%i ", b[i]);
  }
  return 0;
}
