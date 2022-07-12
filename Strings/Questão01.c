#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
char a[20], b[20], c[40];
int i, j, flag;
setbuf(stdin, NULL);
printf("Digite a primeira string: ");
gets(a);
setbuf(stdin, NULL);
printf("Digite a segunda string: ");
gets(b);
for(i=0; i<20; i++){
        if(a[i]==b[i]){
            flag=0;
        }
        else if((a[i]!='\0')&&(b[i]!='\0')){
        break;
        }
        else if(a[i]!=b[i]){
            flag=1;
        }
}
if(flag==1){
    printf("As duas strings são diferentes.\n");
}
else if(flag==0){
    printf("As duas strings são iguais.\n");
}
strcat(c, a);
strcat(c, b);
printf("%s", c);
    return 0;
}
