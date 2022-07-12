#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[50], i;
for(i=0; i<50; i++){
    a[i]=(i+5*i)%(i+1);
    printf("%i\n", a[i]);
}
return 0;
}
