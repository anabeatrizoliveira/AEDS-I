#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], i, j, flag, div;
for(i=0; i<10; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &a[i]);
}
for(i=0; i<10; i++){
    flag=0;
    for(j=2; j<a[i]; j++){
        if(a[i]%j ==0){
            flag=1;
        }
    }
    if(flag==0){
        printf("a[%i]:%i é primo.\n", i, a[i]);
    }
}

return 0;
}
