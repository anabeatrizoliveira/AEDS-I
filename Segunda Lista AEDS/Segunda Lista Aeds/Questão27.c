#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int i, n;
float h=0;
printf("Digite um n�mero para calcular o n�mero harm�nico: ");
scanf("%d", &n);
for (i=1;i<=n;i++){
h=h+1.0/i;
}
printf("%f\n", h);
return 0;
}
