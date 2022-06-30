#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float est, imp, prod;
printf("Digite o número que corresponde ao Estado no qual o produto será enviado: \n 1- MG \n 2- SP \n 3- RJ \n 4- MS \n");
scanf("%f", &est);
printf("Digite o valor do produto: ");
scanf("%f", &prod);
if(est==1){
//1 - Minas Gerais, imposto 7%
imp=prod*1.07;
printf("O produto custará, somando o imposto, R$%.2f", imp);
}
else if(est==2){
//2 - São Paulo, imposto 12%
imp=prod*1.12;
printf("O produto custará, somando o imposto, R$%.2f", imp);
}
else if(est==3){
//3 - Rio de Janeiro, imposto 15%
imp=prod*1.15;
printf("O produto custará, somando o imposto, R$%.2f", imp);
}
else if(est==4){
//3 - Mato Grosso do Sul, imposto 8%
imp=prod*1.08;
printf("O produto custará, somando o imposto, R$%.2f", imp);
}
return 0;
}
