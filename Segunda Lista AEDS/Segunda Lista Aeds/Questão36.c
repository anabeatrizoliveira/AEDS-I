#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, diferenca, sq, qs;
sq=0;
qs=0;
for(i=1;i<=100;i++){
    sq=sq+i*i;
    qs=qs+i;
}
qs=qs*qs;
diferenca=qs-sq;
printf("%i", diferenca);
    return 0;
}
