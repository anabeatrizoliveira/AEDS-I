#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float custofab, custoconsu;
printf("Digite o custo de fábrica de um carro novo: ");
scanf("%f", &custofab);
if(custofab<=12000){
custoconsu=custofab+(custofab*0.05);
printf("O custo do consumidor deste carro será de: R$%.2f.", custoconsu);
}
else if((custofab>12000)&&(custofab<=25000)){
custoconsu=custofab+(custofab*0.10)+(custofab*0.15);
printf("O custo do consumidor deste carro será de: R$%.2f.", custoconsu);
}
else if(custofab>25000){
custoconsu=custofab+(custofab*0.15)+(custofab*0.20);
printf("O custo do consumidor deste carro será de: R$%.2f.", custoconsu);
}
return 0;
}
