#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n1, n2, n, i;
printf("Digite a quantidade de dados que serão analisados: ");
scanf("%i", &n);
for(i=0;i<n;i++){
    printf("Digite o primeiro dado: ");
    scanf("%i", &n1);
    printf("Digite o segundo dado: ");
    scanf("%i", &n2);
    if(n1>n2){
        printf("%i > %i\n", n1, n2);
    }
    else if(n1<n2){
        printf("%i < %i\n", n1, n2);
    }
    else if(n1==n2){
        printf("%i = %i\n", n1, n2);
    }
}
return 0;
}
