#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float basemenor, basemaior, altura, area;
printf("Digite a base menor de um trap�zio: ");
scanf("%f", &basemenor);
printf("Digite a base maior de um trap�zio: ");
scanf("%f", &basemaior);
printf("Digite a altura de um trap�zio: ");
scanf("%f", &altura);
area=((basemenor+basemaior)*altura)/2;
printf("A �rea do trap�zio �: %f", area);
return 0;
}
