#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float km, m, valor, opcao;
while(opcao!=0){
    printf("Digite 1 se quiser converter km/h em m/s.\nDigite 2 se quiser converter m/s em km/h.\nDigite 0 se deseja parar o código.\n");
    scanf("%f", &opcao);
    if((opcao>0)&&(opcao>2)){
        printf("Digite um valor válido.\n\n");
    }
    else if(opcao==1){
        printf("Digite quantos o valor em km/h para calcular m/s: \n");
        scanf("%f", &km);
        valor=km/3.6;
        printf("%.2f m/s\n\n", valor);
    }
    else if(opcao==2){
        printf("Digite quantos o valor em m/s para calcular km/h: \n");
        scanf("%f", &m);
        valor=m*3.6;
        printf("%.2f km/h\n\n", valor);
    }
}
return 0;
}
