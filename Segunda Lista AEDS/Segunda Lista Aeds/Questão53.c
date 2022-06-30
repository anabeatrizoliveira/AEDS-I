#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int
main ()
{
setlocale (LC_ALL, "Portuguese");
int n, i, j, number= 1;

    printf("Digite um número de linhas: ");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
      for(j=1;j<=i;++j)
        {
        printf("%d ",number);
        ++number;
        }
        printf("\n");
    }
return 0;
}
