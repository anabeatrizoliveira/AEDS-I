#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   float r, r1, r2;
   r=1;
   r1=0;
   r2=0;
   while(r>0){
   printf("Digite o valor de R1: ");
   scanf("%f", &r1);
   printf("Digite o valor de R1: ");
   scanf("%f", &r2);
   r=(r1*r2)/(r1+r2);
   if(r>0){
   printf("O valor da resistência é %.2f.\n", r);
   }
   }
   printf("O programa parou pois resistência=0.");



   return 0;
}
