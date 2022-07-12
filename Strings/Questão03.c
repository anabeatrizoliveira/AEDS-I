#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char a[20], b[20];
int i, n, flag;
printf("Digite a primeira string: ");
gets(a);
printf("Digite a segunda string: ");
gets(b);
printf("Informe quantos caracteres deseja comparar: ");
scanf("%i", &n);
for(i=0; i<n; i++){
    if(a[i]==b[i]){
        flag=0;
    }
    else if(a[i]!=b[i]){
        flag=-1;
    }
}
printf("%i", flag);
    return 0;
}

