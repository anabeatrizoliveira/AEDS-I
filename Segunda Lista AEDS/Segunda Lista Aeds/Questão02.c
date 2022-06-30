#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n,i;
n=0;
for (i = 1;i<=100;i++){
    n=n+1;
    printf("%d ",n);
}
printf("\n \n");
n=0;
i=1;
while(i<=100){
    n=n+1;
    printf("%d ",n);
    i++;
}
printf("\n \n");
n=0;
i=1;
do{
    n=n+1;
    printf("%d ",n);
    i++;
}while(i<=100);
return 0;
}
