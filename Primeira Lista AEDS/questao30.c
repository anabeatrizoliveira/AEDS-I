#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a, b, c;
printf("Digite tr�s n�meros inteiros diferentes que o programa os colocar� em ordem crescente.\nDigite o primeiro n�mero: ");
scanf("%i", &a);
printf("Digite o segundo n�mero: ");
scanf("%i", &b);
printf("Digite o terceiro n�mero: ");
scanf("%i", &c);
if((a>b)&&(b>c)){
printf("%i>%i>%i", a, b, c);
}
else if((a>c)&&(c>b)){
printf("%i<%i<%i", b, c, a);
}
else if((b>a)&&(a>c)){
printf("%i<%i<%i", c, a, b);
}
else if((b>c)&&(c>a)){
printf("%i<%i<%i", a, c, b);
}
else if((c>b)&&(b>a)){
printf("%i<%i<%i", a, b, c);
}
else if((c>a)&&(a>b)){
printf("%i<%i<%i", b, a, c);
}
else{
printf("Digite n�meros v�lidos.");
}
return 0;
}
