#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a, b, n1, n2;
printf("Digite o n�mero que corresponde a opera��o que deseja fazer. \n 1 - Adi��o \n 2 - Subtra��o \n 3 - Multiplica��o \n 4 - Divis�o \n");
scanf ("%f", &a);
printf("Digite o primeiro valor: ");
scanf("%f", &n1);
printf("Digite o segundo valor: ");
scanf("%f", &n2);
if(a==1){
b=n1+n2;
printf("A soma de %.2f com %.2f � igual a %.2f.", n1, n2, b);
}
else if((a==2)&&(n1>n2)){
b=n1-n2;
printf("A subtra��o de %.2f com %.2f � igual a %.2f.", n1, n2, b);
}
else if((a==2)&&(n2>=n1)){
b=n2-n1;
printf("A subtra��o de %.2f com %.2f � igual a %.2f.", n2, n1, b);
}
else if(a==3){
b=n1*n2;
printf("A multiplica��o de %.2f com %.2f � igual a %.2f.", n1, n2, b);
}
else if((a==4)&&(n2!=0)){
b=n1/n2;
printf("A subtra��o de %.2f com %.2f � igual a %.2f.", n1, n2, b);
}
else{
printf("Digite uma opera��o v�lida.");
}
return 0;
}
