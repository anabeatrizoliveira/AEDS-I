#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n1, valor;
printf("Digite o número: ");
scanf("%i", &n1);
if((n1%3==0)&&(n1%5!=0)){
printf("O número é divisível apenas por 3.");
}
else if((n1%3!=0)&&(n1%5==0)){
printf("O número é divisível apenas por 5.");
}
else if((n1%3==0)&&(n1%5==0)){
printf("O número é divisível por 3 e por 5.");
}
else {
printf("O número não é divisível nem por 3 nem por 5.");
}
return 0;
}
