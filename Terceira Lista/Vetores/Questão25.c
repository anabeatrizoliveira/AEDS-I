#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[100], i, j;
i=0;
j=0;
while(i<100){
    if((j%7==0)||(j%10==7)){
        a[j]=j;
        printf("%i\n", a[j]);
        i++;
    }
    j++;
}
return 0;
}
