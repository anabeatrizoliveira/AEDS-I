//Como a variável é do tipo int, quando tenta realizar a média harmônica, ela da errado, pois zera o denominador, a única ocasião que sai algum resultado é quando x, y e z são 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int media, x, y, z;
printf("Digite o valor que corresponde à media que deseja realizar: \n1- Geométrica \n2- Ponderada \n3- Harmônica \n4- Aritmética\n");
scanf("%i", &media);
printf("Digite o primeiro valor inteiro: ");
scanf("%i", &x);
printf("Digite o segundo valor inteiro: ");
scanf("%i", &y);
printf("Digite o terceiro valor inteiro: ");
scanf("%i", &z);
if(media==1){
media=cbrt(x*y*z);
printf("A média Geométrica é igual a: %i", media);
}
else if(media==2){
media=(x+2*y+3*z)/6;
printf("A média Ponderada é igual a: %i", media);
}
else if(media==3){
media=1/((1/x)+(1/y)+(1/z));
printf("A média Harmônica é igual a: %i", media);
}
else if(media==4){
media=(x+y+z)/3;
printf("A média Aritmética é igual a: %i", media);
}
return 0;
}
