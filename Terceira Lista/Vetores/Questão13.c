#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n[5], maior, maiorp, menor, menorp, i;
for(i=0; i<5; i++){
    printf("Digite o %i� valor: ", i+1);
    scanf("%i", &n[i]);
    if(i==0){
        maior=n[i];
        menor=n[i];
        maiorp=i;
        menorp=i;
    }
    else if(maior<n[i]){
        maiorp=i;
        maior=n[i];
    }
    else if(menor>n[i]){
        menorp=i;
        menor=n[i];
    }
}
printf("O maior n�mero foi digitado na posi��o %i.\nO menor n�mero foi digitado na posi��o %i.", maiorp, menorp);
return 0;
}
