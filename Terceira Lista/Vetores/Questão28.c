#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int v[10], v1[10], v2[10], i;
for(i=0; i<10; i++){
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &v[i]);
    if(v[i]%2==0){
        v1[i]=0;
        v2[i]=v[i];
    }
    if(v[i]%2==1){
        v2[i]=0;
        v1[i]=v[i];
    }
}
for(i=0; i<10; i++){
    if(v1[i]!=0){
        printf("V1[%i]: %i\n", i, v1[i]);
    }
}
for(i=0; i<10; i++){
    if(v2[i]!=0){
        printf("V2[%i]: %i\n", i, v2[i]);
    }
}
return 0;
}
