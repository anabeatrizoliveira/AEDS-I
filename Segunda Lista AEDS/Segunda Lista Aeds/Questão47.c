#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float op, n1, n2, resultado;
while(op!=0){
    printf("Informe a opera��o que deseja fazer:\n1-Adi��o\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n0-Sair do programa\n");
    scanf("%f", &op);
    if((op<0)||(op>4)){
        printf("Digite uma op��o v�lida\n\n");
    }
    else{
        printf("Informe o primeiro n�mero: ");
        scanf("%f", &n1);
        printf("Informe o segundo n�mero: ");
        scanf("%f", &n2);
    }
    if(op==1){
        resultado=n1+n2;
        printf("A soma do primeiro com o segundo n�mero � igual a: %.2f\n\n", resultado);
    }
    if(op==2){
        resultado=n1-n2;
        printf("A subtra��o do primeiro com o segundo n�mero � igual a: %.2f\n\n", resultado);
    }
    if(op==3){
        resultado=n1*n2;
        printf("O produto do primeiro com o segundo n�mero � igual a: %.2f\n\n", resultado);
    }
    if(op==4){
        resultado=n1/n2;
        printf("O quociente do primeiro com o segundo n�mero � igual a: %.2f\n\n", resultado);
    }
}
return 0;
}
