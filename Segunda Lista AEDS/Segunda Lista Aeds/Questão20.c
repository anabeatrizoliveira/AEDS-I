#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, n, x;
i=0;
while(n!=1000){
    printf("Digite um número: \n");
    scanf("%i", &n);
    if(n==1000)
        break;
    if(n%2==0){
        printf("%i é um número par.\n", n);
    }
    else{
        printf("%i é um número ímpar.\n", n);
    }

}
return 0;
}
