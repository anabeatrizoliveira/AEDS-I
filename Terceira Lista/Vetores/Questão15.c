#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  int  arr[20], result_arr[20], count = 0, stat;
  for (int i = 0; i < 20; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 20; i++)
  {
    stat = 0;
    for (int j = i + 1; j < 20; j++)
    {
      if (arr[i] == arr[j])
      {
        stat = 1;
        break;
      }
    }
    if (stat == 0)
    {
      result_arr[count] = arr[i];
      count++;
    }
  }
  for (int i = 0; i < count; i++)
  {
    printf("result array[%d]: %d\n", i, result_arr[i]);
  }
  return 0;
}

