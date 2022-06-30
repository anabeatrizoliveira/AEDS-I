#include<stdio.h>
int main (){
int a, b, c;
printf ("Digite um número: ");
scanf ("%d", &a);
printf ("Digite outro número: ");
scanf ("%d", &b);
c=a;
a=b;
b=c;
printf ("Os valores trocados das variáveis: %d %d", a, b);
return 0;
}
