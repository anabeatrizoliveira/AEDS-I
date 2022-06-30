#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float x1, x2, a, b, c, delta;
printf("Este programa lhe auxiliará a resolver equações de segundo grau.\nLembrando que uma equação de segundo grau é definida por ax²+bx+c, \ndigite o valor de a: ");
scanf("%f", &a);
printf("Digite o valor de b: ");
scanf("%f", &b);
printf("Digite o valor de b: ");
scanf("%f", &c);
delta=(b*b)-4*(a*c);
if(delta<0){
printf("Não existe raiz real para esta equação");
}
else if(delta==0){
x1=(-b)/(2*a);
printf("Existe apenas uma raíz real para esta equação, x=%.2f", x1);
}
else if(delta>0){
delta=sqrt(delta);
x1=(-b+delta)/(2*a);
x2=(-b-delta)/(2*a);
printf("Existe duas raizes reais para esta equação: x1=%.2f e x2=%.2f", x1, x2);
}
return 0;
}
