#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   float base, altura, area;
   base=0;
   altura=0;
   while((base==0)&&(altura==0)){
   printf("Informe a base do triângulo: ");
   scanf("%f", &base);
   printf("Informe a altura do triângulo: ");
   scanf("%f", &altura);
   if((base==0)||(altura==0)){
        altura=0;
        base=0;
       printf("Digite valores válidos.\n");
   }
   }
   area=base*altura/2.0;
   printf("A área do triângulo é igual a %.2f", area);


   return 0;
}
