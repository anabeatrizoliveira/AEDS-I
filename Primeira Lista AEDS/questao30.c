#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a, b, c;
printf("Digite três números inteiros diferentes que o programa os colocará em ordem crescente.\nDigite o primeiro número: ");
scanf("%i", &a);
printf("Digite o segundo número: ");
scanf("%i", &b);
printf("Digite o terceiro número: ");
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
printf("Digite números válidos.");
}
return 0;
}
