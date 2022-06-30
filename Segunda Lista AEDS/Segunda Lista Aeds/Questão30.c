//a lei geral no final da sequência na lista está errada, observando as sequências outra foi criada para cada situação.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, soma, par, impar, impares, n;
printf("Digite um número para gerar as sequências: ");
scanf("%i", &n);
soma=0;
for(i=0;i<=n;i++){
    soma=soma+i;
}
printf("O cálculo da primeira sequência é igual a %i.\n", soma);
par=0;
impar=0;
for(i=0;i<=n;i++){
    if(i%2==0){
        par=par-i;
    }
    else{
        impar=impar+i;
    }
}
soma=par+impar;
printf("O cálculo da segunda sequência é igual a %i.\n", soma);

impares=0;
for(i=0;i<=n;i++){
    if(i%2!=0){
        impares=impares+i;
    }

}
printf("O cálculo da terceira. sequência é igual a %i.\n", impares);

return 0;
}
