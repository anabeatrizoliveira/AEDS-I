#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");

int n,i;
n=0;
for (i = 1;i<=5;i++){
    n = n+3;
    printf("%d ",n);
}

return 0;

}
