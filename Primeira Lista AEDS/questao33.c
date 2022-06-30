#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float produto, aumento;
printf("Digite o valor do produto: ");
scanf("%f", &produto);
if(produto<50.){
    aumento=produto*1.05;
    printf("O novo valor do produto com o aumento será de R$%.2f.\n", aumento);
}
else if((produto>=50.0)&&(produto<=100.0)){
    aumento=produto*1.10;
    printf("O novo valor do produto com o aumento será de R$%.2f.\n", aumento);
}
else if(produto>100.0){
    aumento=produto*1.15;
    printf("O novo valor do produto com o aumento será de R$%.2f.\n", aumento);
}
if(aumento<80.0){
    printf("Barato.");
}
else if((aumento>=80.0)&&(aumento<=120)){
    printf("Normal.");
}
else if((aumento>=121.0)&&(aumento<=200)){
    printf("Caro.");
}
else if(aumento>200.0){
    printf("Muito caro.");
}
return 0;
}
