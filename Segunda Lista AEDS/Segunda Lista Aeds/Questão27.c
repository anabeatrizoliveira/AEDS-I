#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int i, n;
float h=0;
printf("Digite um número para calcular o número harmônico: ");
scanf("%d", &n);
for (i=1;i<=n;i++){
h=h+1.0/i;
}
printf("%f\n", h);
return 0;
}
