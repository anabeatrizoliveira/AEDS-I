//Como a vari�vel � do tipo int, quando tenta realizar a m�dia harm�nica, ela da errado, pois zera o denominador, a �nica ocasi�o que sai algum resultado � quando x, y e z s�o 1
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int media, x, y, z;
printf("Digite o valor que corresponde � media que deseja realizar: \n1- Geom�trica \n2- Ponderada \n3- Harm�nica \n4- Aritm�tica\n");
scanf("%i", &media);
printf("Digite o primeiro valor inteiro: ");
scanf("%i", &x);
printf("Digite o segundo valor inteiro: ");
scanf("%i", &y);
printf("Digite o terceiro valor inteiro: ");
scanf("%i", &z);
if(media==1){
media=cbrt(x*y*z);
printf("A m�dia Geom�trica � igual a: %i", media);
}
else if(media==2){
media=(x+2*y+3*z)/6;
printf("A m�dia Ponderada � igual a: %i", media);
}
else if(media==3){
media=1/((1/x)+(1/y)+(1/z));
printf("A m�dia Harm�nica � igual a: %i", media);
}
else if(media==4){
media=(x+y+z)/3;
printf("A m�dia Aritm�tica � igual a: %i", media);
}
return 0;
}
