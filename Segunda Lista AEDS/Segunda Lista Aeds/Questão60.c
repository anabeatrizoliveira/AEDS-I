#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, i, soma, maior, menor, somamedia, media, mediapar, par;
par=0;
i=1;
n=1;
menor=0;
maior=0;
soma=0;
somamedia=0;
while(n!=0){
    printf("Digite o %iº número:", i);
    scanf("%i", &n);
    if(n==0){
        break;
    }
    i++;
    soma=soma+n;
    if(maior<n){
        maior=n;
    }
    else{
        menor=n;
    }
    if(n%2==0){
        somamedia=somamedia+n;
        par++;
    }
}
    media=soma/(i-1);
    mediapar=somamedia/par;
printf("A soma de todos os números digitados é igual a: %i.\n", soma);
printf("A quantidade de números digitados foi: %i.\n", i-1);
printf("A média arredondada para baixo de todos os números digitados é igual a: %i.\n", media);
printf("O maior número digitado foi: %i.\n", maior);
printf("O menor número digitado foi: %i.\n", menor);
printf("A média de todos os números pares digitados é igual a: %i.\n", mediapar);

return 0;
}
