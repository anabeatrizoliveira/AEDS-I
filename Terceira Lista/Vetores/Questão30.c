#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int a[10], b[10], cont=0, c[cont], i, j;
for(i=0; i<10; i++){
    printf("Digite o %iº número do primeiro vetor: ", i+1);
    scanf("%i", &a[i]);
}
for(i=0; i<10; i++){
    printf("Digite o %iº número do segundo vetor: ", i+1);
    scanf("%i", &b[i]);
}
for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        if(b[i]==a[j]){
            cont++;
        }
    }
}
for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        if(b[i]==a[j]){
            c[i]==b[i];
        }
    }
}
for(i=0; i<10; i++){
    printf("C[%i]:%i\n", i, c[i]);
}
return 0;
}
