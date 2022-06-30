#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, nmaior, nmenor, i;
nmaior=0;
nmenor=0;
i=0;
printf("Digite um numero:");
scanf("%d",&n);
  nmenor=n;
  nmaior=n;
  for(i=1;i<10;i++){
    printf("Digite um numero:");
    scanf("%d",&n);
    if(n>nmaior) {
        nmaior=n;
    }
    if(n<nmenor) {
        nmenor=n;
    }
  }
  printf ("O menor número digitado é o: %d. Já o maior número é o: %d.",nmenor, nmaior);
  return 0;
}
