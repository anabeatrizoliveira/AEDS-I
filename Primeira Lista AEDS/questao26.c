#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int km, l, consumo;
printf("Digite quantos km foram percorridos: ");
scanf("%i", &km);
printf("Digite quantos litros de gasolina foram consumidos: ");
scanf("%i", &l);
consumo=km/l;
if(consumo<8){
printf("Venda o carro!");
}
else if((consumo>=8)&&(consumo<=14)){
printf("Econômico!");
}
//este considerei 14 e não 12, como está no exercício, para não dar conflito de informações com o else if superior
else if(consumo>14){
printf("Super econômico!");
}
return 0;
}
