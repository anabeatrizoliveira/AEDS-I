#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   int i, n, maior, menor;
   n=1;
   maior=0;
   menor=0;
   while(n>0){
   printf("Digite um n�mero ou um n�mero negativo para parar: ");
   scanf("%i", &n);
   if(n>maior){
       maior=n;
   }
   else{
       menor=n;
   }

   }

   printf("O maior n�mero digitado foi %i e o menor %i", maior, menor);


   return 0;
}
