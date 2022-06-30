#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float a, b, c;
printf("Digite o primeiro lado do triângulo: ");
scanf("%f", &a);
printf("Digite o segundo lado do triângulo: ");
scanf("%f", &b);
printf("Digite o terceiro lado do triângulo: ");
scanf("%f", &c);
if ((a<b+c)&&(b<a+c)&&(c<a+b)) {
printf("O triângulo é válido.\n");
if((a==b)&&(a==c)&&(b==c)){
printf("E este triângulo é equilátero.");
}
else if((a==b)||(b==c)||(a==c)){
printf("E este triângulo é isóceles.");
}
else if(a!=b!=c){
printf("E este triângulo é escaleno");
}
}
else {
    printf("Estes valores não são válidos para um triângulo.");
}

return 0;
}
