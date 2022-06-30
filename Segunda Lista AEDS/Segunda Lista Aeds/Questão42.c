#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   float i, quadrado, cubo, raiz;
   i=1;
   while(i>0){
       printf("Digite um número para calcular ele ao quadrado, ao cubo e sua raiz quadrada: \nDigite um número negativo ou 0 para parar.");
       scanf("%f", &i);
       if(i>0){
       quadrado=pow(i,2);
       cubo=pow(i,3);
       raiz=sqrt(i);
       printf("O quadrado de %.2f é: %.2f. \nO cubo de %.2f é: %.2f. \nA raiz de %.2f é: %.2f. \n", i, quadrado, i, cubo, i, raiz);
       }

   }
   return 0;
}
