#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, divisor, n;
printf("Digite um n�mero: ");
scanf("%i", &n);
printf("Os divisores deste n�mero s�o: \n");
for(i=1;i<=n;i++){
    if(n%i==0){
        divisor=i;
        printf("%i \n", divisor);
    }
}
return 0;
}
