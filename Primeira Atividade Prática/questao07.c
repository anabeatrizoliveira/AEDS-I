#include<stdio.h>
int main (){
float salariobase, bonificacao, imposto, salario;
printf ("Digite seu salario: ");
scanf ("%f", &salariobase);
bonificacao=salariobase*0.05;
imposto=salariobase*0.07;
salario=salariobase+bonificacao-imposto;
printf ("O salario que sera recebido pelo funcionario e igual a R$ %f", salario);
return 0;
}
