#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int N, E = 1, i, j, num, fatorial;
printf("Digite um numero: ");
scanf("%d", &N);
for(i=1; i<=N; ++i){
 num = 1.0/i;
 fatorial = 1;
 for(j=num; j>0; --j){ //calculando o fatorial de 1/i
  fatorial*=num;
 }
 E += fatorial; //"E" é somado ao fatorial da divisão de 1 por i
}
printf("Valor de 'E': %d", E);

}
