#include<stdio.h>
#include <stdlib.h>

int main()
{
int cat=0,cant=0;
float sueldo=0,sueldo2=0;
printf("Ingrese su sueldo \n");
scanf("%f",&sueldo);
printf("Ingrese su categoria \n");
scanf("%d",&cat);
printf("Ingrese la cantidad de hijos \n");
scanf("%d",&cant);
if (cat==1)
{

sueldo2=sueldo+(sueldo*10/100);
}
else
{
sueldo2=sueldo+(sueldo*20/100);
}
if (cant>4)
{
sueldo2=sueldo2+(cant*500);
}
else
{
sueldo2=sueldo2+(cant*300);
}
printf("Su sueldo es %f",sueldo2);
return 0;
}
