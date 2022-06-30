//Esse não consegui fazer, porém estou explicitando meu raciocínio
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main ()
{
int i, j, num=0;
float fatorial=0, s=0;
for(i=1;i<=5;i++){
    num=i/fatorial;
    fatorial=1;
    for(j=1;j<=2*i;j++){
        fatorial*=j;
    }
    s=s+num;
}
printf("Valor de 'S': %f", s);
return 0;
}
