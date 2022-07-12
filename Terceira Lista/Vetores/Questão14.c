#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  int a[10];
  int repeat[2];
  for(int i=0; i<10; i++)
  {
    printf("Digite um numero ");
    scanf("%d",&a[i]);
  }
  for(int i=0; i<10; i++)
  {
    for(int j=i; j<10; j++)
    {
      if (a[i] == a[j + 1])
      {
        repeat[0] = a[i];
        repeat[1] = a[j + 1];
        printf("O número %i se repetiu. \n", repeat[1]);
      }
    }
  }
  return 0;
}
