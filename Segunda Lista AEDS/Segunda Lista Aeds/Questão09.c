#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, impar;
printf("Digite um número inteiro: ");
scanf("%i", &n);
i=0;
if(n%2==0){
    impar=n+1;
    printf("%i ", impar);
    i++;
    while(i<n){
    impar=impar+2;
    printf("%i ", impar);
    i++;
    }
}
else if(n%2!=0){
    impar=n;
    while(i<n){
    impar=impar+2;
    printf("%i ", impar);
    i++;
    }
}

  return 0;
}
