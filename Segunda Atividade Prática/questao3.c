#include <stdio.h>
int main()
{
int a;
int b;
b=0;
printf ("Digite o primeiro numero: ");
scanf ("%d", &a);
if (a%2==0);{
b+1;}
printf ("Digite o segundo numero: ");
scanf ("%d", &a);
if (a%2==0){
b+1;}
printf ("Digite o terceiro numero: ");
scanf ("%d", &a);
if (a%2==0){
b+1;}
printf ("Digite o quarto numero: ");
scanf ("%d", &a);
if (a%2==0){
b+1;}
printf ("Digite o quarto numero: ");
scanf ("%d", &a);
if (a%2==0){
b+1;}
a=0;
a=5-b;
printf("Foram digitados %i numeros pares e %i numeros impares", b, a);
return 0;
}
