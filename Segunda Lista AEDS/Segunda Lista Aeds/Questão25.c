#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i;
for(i=1;i<1001;i++){
    if((i%3==0)||(i%5==0)){
        printf("%i ", i);
    }
}
printf("Estes números são divisíveis por 3 ou por 5.");
return 0;
}
