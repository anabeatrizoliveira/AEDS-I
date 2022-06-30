#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float op, n1, n2, resultado;
while(op!=0){
    printf("Informe a operação que deseja fazer:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n0-Sair do programa\n");
    scanf("%f", &op);
    if((op<0)||(op>4)){
        printf("Digite uma opção válida\n\n");
    }
    else{
        printf("Informe o primeiro número: ");
        scanf("%f", &n1);
        printf("Informe o segundo número: ");
        scanf("%f", &n2);
    }
    if(op==1){
        resultado=n1+n2;
        printf("A soma do primeiro com o segundo número é igual a: %.2f\n\n", resultado);
    }
    if(op==2){
        resultado=n1-n2;
        printf("A subtração do primeiro com o segundo número é igual a: %.2f\n\n", resultado);
    }
    if(op==3){
        resultado=n1*n2;
        printf("O produto do primeiro com o segundo número é igual a: %.2f\n\n", resultado);
    }
    if(op==4){
        resultado=n1/n2;
        printf("O quociente do primeiro com o segundo número é igual a: %.2f\n\n", resultado);
    }
}
return 0;
}
