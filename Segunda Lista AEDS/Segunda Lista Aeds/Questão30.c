//a lei geral no final da sequ�ncia na lista est� errada, observando as sequ�ncias outra foi criada para cada situa��o.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i, soma, par, impar, impares, n;
printf("Digite um n�mero para gerar as sequ�ncias: ");
scanf("%i", &n);
soma=0;
for(i=0;i<=n;i++){
    soma=soma+i;
}
printf("O c�lculo da primeira sequ�ncia � igual a %i.\n", soma);
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
printf("O c�lculo da segunda sequ�ncia � igual a %i.\n", soma);

impares=0;
for(i=0;i<=n;i++){
    if(i%2!=0){
        impares=impares+i;
    }

}
printf("O c�lculo da terceira. sequ�ncia � igual a %i.\n", impares);

return 0;
}
