#include <stdio.h>
int main()
{
float salarioporhora, numerohora, salario, horaextra, filhos, imposto, salariofinal, salarioliquido;
printf("Digite o valor por hora trabalhadas: ");
scanf("%f", &salarioporhora);
printf("Digite a quantidade de horas trabalhadas: ");
scanf("%f", &numerohora);
printf("Digite a quantidade de horas extras: ");
scanf("%f", &horaextra);
printf("Digite o numero de filhos: ");
scanf("%f", &filhos);
salario=salarioporhora*(numerohora+horaextra)+filhos*128;
if (salario<=1434.59){
imposto=salario*0.00;
}
else if ((salario>=1434.60)&&(salario<=2150.0)){
imposto=salario*0.075;
}
else if ((salario>=2150.01)&&(salario<=2866.70)){
imposto=salario*0.015;
}
else if ((salario>=2866.71)&&(salario<=3582.0)){
imposto=salario*0.225;
}
else if(salario>=3582.01){
imposto=salario*0.275;
}
salarioliquido=salario-imposto;
if(salarioliquido<=500.0){
salariofinal=salarioliquido+180;
}
else if((salarioliquido>500.0)&&(salarioliquido<1001)){
salariofinal=salarioliquido+120;
}
if(salarioliquido>1000){
salariofinal=salarioliquido+100;
}
printf("O salario final do empregado e %f", salariofinal);
return 0;
}

