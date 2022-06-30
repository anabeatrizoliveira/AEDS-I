#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int soma, f1, f2, f3;
soma=0;
f1=0;
f2=1;
while(f3<4000000){
f3=f2+f1;
f1=f2;
f2=f3;
if(f3%2==0){
soma=soma+f3;
}
}
printf("%i", soma);
return 0;
}
