#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int v[6], v1[6], v2[6], i, soma=0, cont=0;
for(i=0; i<6; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &v[i]);
    if(v[i]%2==0){
        v1[i]=0;
        v2[i]=v[i];
        soma=soma+v2[i];
    }
    if(v[i]%2==1){
        v2[i]=0;
        v1[i]=v[i];
        cont++;
    }
}
for(i=0; i<6; i++){
    if(v1[i]!=0){
        printf("V1[%i]: %i\n", i, v1[i]);
    }
}
printf("A quantidade de números impares digitados foi: %i.\n", cont);
for(i=0; i<6; i++){
    if(v2[i]!=0){
        printf("V2[%i]: %i.\n", i, v2[i]);
    }
}
printf("A soma dos números pares digitados foi: %i.", soma);
return 0;
}
