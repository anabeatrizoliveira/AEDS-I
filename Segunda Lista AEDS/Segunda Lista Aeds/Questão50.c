#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
setlocale (LC_ALL, "Portuguese");
float alturachico, alturaze;
int anos;
alturachico=1.50;
alturaze=1.10;
anos=0;
while(alturachico>alturaze){
alturachico=alturachico+0.02;
alturaze=alturaze+0.03;
anos++;
}
printf("Demorar� %i anos para que Z� fique mais alto que Chico.", anos);
return 0;
}
