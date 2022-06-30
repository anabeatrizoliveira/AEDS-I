#include<stdio.h>
int main (){
float ndias, valortotal, imposto, valorfinal;
printf ("Digite quantos dias foram trabalhados: ");
scanf ("%f", &ndias);
valortotal=30.00*ndias;
imposto=valortotal*0.08;
valorfinal=valortotal-imposto;
printf ("O salario que sera recebido pelo funcionario e igual a R$ %f", valorfinal);
return 0;
}
