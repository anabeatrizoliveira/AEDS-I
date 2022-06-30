#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, num, i, soma=0, maior, menor, kwh, c, c1, c2, c3;
float media;
menor=0;
maior=0;
c1=0;
c2=0;
c3=0;

printf("Digite a quantidade de habitantes.");
scanf("%i", &n);
printf("Digite o valor do kwh.");
scanf("%i", &kwh);
for (i=1; i<=n; i++) {
printf("Informe o consumo do %dº mês: ", i);
scanf("%d", &num);
printf("Informe o código do consumidor para: \n 1-Residencial \n 2-Comercial \n 3- Indústrual ");
scanf("%d", &c);
soma=soma+num;
if (i == 1)
maior = menor = num;
else
if (maior < num)
maior = num;
else
if (menor > num)
menor = num;
if (c == 1)
c1=c1+num;
else
if (c == 2)
c2=c2+num;
else
if (c == 3)
c3=c3+num;
}

media = (float) soma/ n;
printf("Média: %.2f KWH\n", media);
printf("Maior: %d\n", maior);
printf("Menor: %d\n", menor);
printf("Consumo Residencial: %i \n", c1);
printf("Consumo Residencial: %i \n", c2);
printf("Consumo Residencial: %i \n", c3);
return 0;
}
