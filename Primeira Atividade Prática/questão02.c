#include<stdio.h>
int main (){
float celsius;
float far;
printf ("Digite a temperatura em Celsius: ");
scanf ("%f", &celsius);
far=(celsius*(9.0/5.0))+32;
printf ("%f graus em Celsios e igual a %f graus em Fahrenheit ", celsius, far);
return 0 ;
}
