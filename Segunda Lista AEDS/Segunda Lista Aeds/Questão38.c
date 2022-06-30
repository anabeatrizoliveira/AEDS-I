#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   int a, b, c;
   for(a=1;a<32;a++){
       for(b=1;b<32;b++){
           for(c=1;c<32;c++)
           if(a*a+b*b+c*c==1000){
               printf("%i^2+%i^2+%i^2=1000\n", a, b, c);
           }
       }
   }
   return 0;
}
