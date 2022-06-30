#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float venda, total;
printf("Informe o valor que foi vendido: ");
scanf("%f", &venda);
if(venda<20000){
total=(venda*0.14)+400.0;
printf("O valor total da comissão é R$%.2f", total);
}
else if((venda>=20000)&&(venda<40000)){
total=(venda*0.14)+500.0;
printf("O valor total da comissão é R$%.2f", total);
}
else if((venda>=40000)&&(venda<60000)){
total=(venda*0.14)+550.0;
printf("O valor total da comissão é R$%.2f", total);
}
else if((venda>=60000)&&(venda<80000)){
total=(venda*0.14)+600.0;
printf("O valor total da comissão é R$%.2f", total);
}
else if((venda>=80000)&&(venda<100000)){
total=(venda*0.14)+650.0;
printf("O valor total da comissão é R$%.2f", total);
}
else if(venda>=100000){
total=(venda*0.16)+700.0;
printf("O valor total da comissão é R$%.2f", total);
}
return 0;
}
