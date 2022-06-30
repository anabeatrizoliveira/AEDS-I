#include<stdio.h>
int main (){
float altura;
float peso;
float imc;
printf("Digite uma altura: ");
scanf("%f", &altura);
printf("Digite um peso: ");
scanf("%f", &peso);
imc=peso/(altura*altura);
printf ("O IMC para este peso e altura: %f", imc);
return 0;
}
