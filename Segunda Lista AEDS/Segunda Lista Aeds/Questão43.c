#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   int soma, idade, i, media;
   i=0;
   idade=1;
   media=0;
   soma=0;
   while(idade>0){
       printf("Digite a idade da pessoa ou 0 para parar.");
       scanf("%i", &idade);
       if(idade>0){
       i++;
       }
       soma=soma+idade;
   }
   media=soma/i;
   printf("A média sem casas decimais das idades destas pessoas é %i.", media);
   return 0;
}
