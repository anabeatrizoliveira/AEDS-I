#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  float salario, aumento, i;
  double total;
  aumento=0.015;
  salario=2000.0;
  total=salario+(salario*aumento);
  salario=total;
  for(i=1997;i<2007;i++){
          aumento=aumento*2.0;
          total=salario+(salario*aumento);
          salario=total;

  }
  printf("Em 2007 o sal�rio do funcion�rio ser� de: R$%.2f.", total);
  return 0;
  //considerei apenas 10 anos de sal�rio, pois como o aumento � sempre o dobro do interior, chega um momento que o sal�rio come�a a subir demais e o valor fica muito grande.
}
