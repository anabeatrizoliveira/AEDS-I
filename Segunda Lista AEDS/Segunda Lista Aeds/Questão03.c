#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n,i;
n=11;
i=0;
while(i<=10){
    n=n-1;
    printf("%d ",n);
    i++;
}
printf("\nFIM! ");
return 0;
}
