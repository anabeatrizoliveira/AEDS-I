#include<stdio.h>
#include<math.h>
int main (){
int a, b, f;
printf ("Digite um numero: ");
scanf ("%d", &a);
printf ("Digite outro numero: ");
scanf ("%d", &b);
f=(b*b*b+a*b)-2*b+a%b;
printf ("F(x)= %d", f);
return 0;
}
