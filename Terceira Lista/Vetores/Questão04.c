#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[8], x, y, i, soma=0;
for(i=0;i<8;i++){
    printf("Digite um n�mero: ");
    scanf("%i", &a[i]);
}
printf("Digite a primeira posi��o de 0 a 7: ");
scanf("%i", &x);
printf("Digite a segunda posi��o de 0 a 7: ");
scanf("%i", &y);
for(i=0;i<8;i++){
    if((i==y)||(i==x)){
        soma=soma+a[i];
    }
}
printf("A soma do n�meros dessa posi��o � igual a: %i", soma);
return 0;
}
