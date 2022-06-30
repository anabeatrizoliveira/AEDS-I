#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n;
n=0;
while(n<=100000){
    n=n+1000;
    printf("%d ",n);
}
return 0;
}
