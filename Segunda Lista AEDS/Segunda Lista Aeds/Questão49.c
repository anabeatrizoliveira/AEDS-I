#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
  setlocale (LC_ALL, "Portuguese");
  float carlos, joao, rendajoao, rendacarlos;
  int meses;
  printf ("Digite quanto Carlos recebe por m�s: ");
  scanf ("%f", &carlos);
  joao = carlos / 3;
  rendacarlos = carlos;
  rendajoao = joao;
  meses = 1;
  while (rendacarlos >= rendajoao)
    {
      rendacarlos = rendacarlos * 1.02;
      rendajoao = rendajoao * 1.05;
      meses++;
    }
  printf
    ("Se Carlos recebe um sal�rio de R$%.2f, demorar� %i meses para que o valor pertecente a Jo�o iguale ao valor pertecente a Carlos.",
     carlos, meses);
  return 0;
}

