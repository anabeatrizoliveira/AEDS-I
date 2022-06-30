#include <stdio.h>
int main()
{
int x, f, g, h;
x=0;
printf ("Digite o valor de X: ");
scanf ("%i", &x);
h=x*x+3*x-20;

if (h>5){
g=h;}
else if (h<=5){
g=5;}

if (g<=10){
f=10;}
else if (g>10){
f=x+2*(x*x);}

printf("O funcao f(x)=%d", f);

return 0;
}
