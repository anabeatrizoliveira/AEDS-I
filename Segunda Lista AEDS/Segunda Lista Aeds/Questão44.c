#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, f1, f2, f3;
f1=0;
f2=1;
printf("Digite um numero positivo: ");
scanf("%d", &n);
if(n<0) {
    printf("Digite um número positivo.\n");
}
else {
    printf("0  1");
    while(f2<= n) {
        f3=f2+f1;
        printf("  %d", f3);
        f1=f2;
        f2=f3;
        }
    }
return 0;
}
