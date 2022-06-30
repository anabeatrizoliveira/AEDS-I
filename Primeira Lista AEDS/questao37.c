#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int horaentrada, horasaida, minutoentrada, minutosaida, total;
float valor;
printf("Digite a hora de entrada: ");
scanf("%i", &horaentrada);
printf("Digite o minuto de entrada: ");
scanf("%i", &minutoentrada);
printf("Digite a hora de saída: ");
scanf("%i", &horasaida);
printf("Digite o minuto de saída: ");
scanf("%i", &minutosaida);
if((minutosaida<=minutoentrada)&&(minutosaida<61)&&(minutoentrada<61)&&(minutosaida>=0)&&(minutoentrada>=0)&&(horaentrada>=0)&&(horasaida>=0)&&(horaentrada<24)&&(horasaida<24)){
total=horasaida-horaentrada;
}
else if((minutosaida>minutoentrada)&&(minutosaida<61)&&(minutoentrada<61)&&(minutosaida>=0)&&(minutoentrada>=0)&&(horaentrada>=0)&&(horasaida>=0)&&(horaentrada<24)&&(horasaida<24)){
total=horasaida-horaentrada+1;
}
else{
printf("Digite um número válido para o horário.");
}
if((total>0)&&(total<3)){
valor=total*1.0;
printf("O valor que será pago pelo estacionamento é: R$%.2f", valor);
}
else if((total>2)&&(total<5)){
valor=total*1.4;
printf("O valor que será pago pelo estacionamento é: R$%.2f", valor);
}
else if(total>5){
valor=total*2.0;
printf("O valor que será pago pelo estacionamento é: R$%.2f", valor);
}
return 0;
}
