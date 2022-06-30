#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n1, n2, i, soma;
printf("Digite o menor número do intervalo: ");
scanf("%i", &n1);
printf("Digite o maior número do intervalo: ");
scanf("%i", &n2);
soma=0;
for(i=n1;i<=n2;i++){
if(n2>n1){
break;
}
}
for(i=n1;i<=n2;i++){
if(i%2==1){
soma=soma+i;
}
}
printf("A soma ímpares deste intervalo é: %i", soma);
return 0;
}
