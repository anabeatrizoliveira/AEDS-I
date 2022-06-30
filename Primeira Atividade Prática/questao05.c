#include<stdio.h>
#include<math.h>
int main (){
float cateto01;
float cateto02;
float hipotenusa;
printf("Digite o primeiro cateto: ");
scanf("%f", &cateto01);
printf("Digite o segundo cateto: ");
scanf("%f", &cateto02);
hipotenusa=sqrt(cateto01*cateto01+cateto02*cateto02);
printf("A hipotenusa deste triangulo e igual a %f", hipotenusa);
return 0;
}
