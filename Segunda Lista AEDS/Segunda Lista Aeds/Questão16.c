#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, impar;
printf("Digite um número inteiro: ");
scanf("%i", &n);
i=n;
while(i>=0){
if(n%2==0){
n=n-1;
i=n;
printf("%i ", i);
i=i-2;
}
else{
printf("%i ", i);
i=i-2;
}
}
return 0;
}
