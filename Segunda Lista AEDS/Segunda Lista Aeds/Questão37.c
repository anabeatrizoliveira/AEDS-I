#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   int i;
      for(i=1000; i<= 9999; i++ ){
                if(i == (((i/100)+(i%100))*((i/100)+(i%100))))
                       printf("%d: %d+%d=%d -> %d^2=%d \n",i,i/100,i%100,(i/100)+(i%100),(i/100)+(i%100),i);
      }
}
