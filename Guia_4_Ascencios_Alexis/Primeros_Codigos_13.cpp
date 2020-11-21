#include<stdio.h>
#include <stdlib.h>

int main()
{
int valor=0,valor2=0,valor3=0;
printf("Ingresa 3 valores\n");
scanf("%d %d %d",&valor,&valor2,&valor3);
if (valor==valor2&&valor2==valor3)
{
printf("Son iguales \n");
}

else {
if (valor==valor2||valor2==valor3||valor==valor3)
{
printf("dos iguales y uno distinto\n");
}
else{
printf ("Son todos distintos\n");
}
}
return 0;
}
