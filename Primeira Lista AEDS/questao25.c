#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float x1, x2, a, b, c, delta;
printf("Este programa lhe auxiliar� a resolver equa��es de segundo grau.\nLembrando que uma equa��o de segundo grau � definida por ax�+bx+c, \ndigite o valor de a: ");
scanf("%f", &a);
printf("Digite o valor de b: ");
scanf("%f", &b);
printf("Digite o valor de b: ");
scanf("%f", &c);
delta=(b*b)-4*(a*c);
if(delta<0){
printf("N�o existe raiz real para esta equa��o");
}
else if(delta==0){
x1=(-b)/(2*a);
printf("Existe apenas uma ra�z real para esta equa��o, x=%.2f", x1);
}
else if(delta>0){
delta=sqrt(delta);
x1=(-b+delta)/(2*a);
x2=(-b-delta)/(2*a);
printf("Existe duas raizes reais para esta equa��o: x1=%.2f e x2=%.2f", x1, x2);
}
return 0;
}
