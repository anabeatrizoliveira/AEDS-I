#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float salarioatual, tempo, salariorea;
printf("Digite seu salario atual: ");
scanf("%f", &salarioatual);
printf("Digite quantos anos completos de empresa (caso seja menos de um ano, coloque 0): ");
scanf("%f", &tempo);
if((salarioatual<=500.0)&&(tempo<1)){
salariorea=salarioatual*1.25;
printf("O valor do salário com o reajuste será: R$%.2f", salariorea);
}
else if((salarioatual<=500.0)&&(tempo>1)){
printf("Infelizmente você não tem direito a aumento.");
}
else if((salarioatual<=1000.0)&&(tempo>=1)&&(tempo<=3)){
salariorea=salarioatual*1.20+100;
printf("O valor do salário com o reajuste será: R$%.2f", salariorea);
}
else if((salarioatual<=1000.0)&&(tempo>4)){
printf("Infelizmente você não tem direito a aumento.");
}
else if((salarioatual<=1500.0)&&(tempo>=4)&&(tempo<=6)){
salariorea=salarioatual*1.15+200;
printf("O valor do salário com o reajuste será: R$%.2f", salariorea);
}
else if((salarioatual<=1000.0)&&(tempo>6)){
printf("Infelizmente você não tem direito a aumento.");
}
else if((salarioatual<=2000.0)&&(tempo>=7)&&(tempo<=10)){
salariorea=salarioatual*1.15+200;
printf("O valor do salário com o reajuste será: R$%.2f", salariorea);
}
else if((salarioatual>2000.0)&&(tempo>10)){
printf("Infelizmente você não tem direito a aumento.");
}
else {
printf("Infelizmente você não tem direito a aumento.");
}
return 0;
}
