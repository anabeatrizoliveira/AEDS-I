#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[6], b[6], i, j;
j=5;
for(i=0; i<6; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &a[i]);
    b[j]=a[i];
    j--;
}
for(i=0; i<6; i++){
    printf("%i \n", b[i]);
}
return 0;
}
