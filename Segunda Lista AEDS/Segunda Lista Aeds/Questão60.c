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
    printf("Digite o %i� n�mero:", i);
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
printf("A soma de todos os n�meros digitados � igual a: %i.\n", soma);
printf("A quantidade de n�meros digitados foi: %i.\n", i-1);
printf("A m�dia arredondada para baixo de todos os n�meros digitados � igual a: %i.\n", media);
printf("O maior n�mero digitado foi: %i.\n", maior);
printf("O menor n�mero digitado foi: %i.\n", menor);
printf("A m�dia de todos os n�meros pares digitados � igual a: %i.\n", mediapar);

return 0;
}
