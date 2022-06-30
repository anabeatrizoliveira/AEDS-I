#include <stdio.h>
int main()
{
int a;
int b;
printf ("Digite seu RA:");
scanf ("%d", &a);
printf ("Digite sua senha:");
scanf ("%d", &b);
if ((a==675483)&&(b==67453)) {
printf ("Usuario Valido");
}
else if ((a==145627)&&(b==89234)) {
printf ("Usuario Valido");
}
else if ((a==98782)&&(b==89132)) {
printf ("Usuario Valido");
}
else {
printf ("Usuario Invalido");
}
return 0;
}
