#include<stdio.h>
int main (){
int a, b, c;
printf ("Digite um n�mero: ");
scanf ("%d", &a);
printf ("Digite outro n�mero: ");
scanf ("%d", &b);
c=a;
a=b;
b=c;
printf ("Os valores trocados das vari�veis: %d %d", a, b);
return 0;
}
