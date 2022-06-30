#include<stdio.h>
int main (){
float celsius, far;
printf ("Digite a temperatura em Fahrenheit: ");
scanf ("%f", &far);
celsius=(5.0*(far-32)/9);
printf ("%f graus em Fahrenheit é igual %f graus em Celsius ", far, celsius);
return 0 ;
}
