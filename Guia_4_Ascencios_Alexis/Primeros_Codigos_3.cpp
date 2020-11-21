#include<stdio.h>
#include <stdlib.h>

int main()
{
int h=0,m=0,t=0;
float porcmuj=0,porchom=0;
printf("Ingresa la cantidad de mujeres\n");
scanf("%d",&m);
printf("Ingresa la cantidad de hombres\n");
scanf("%d",&h);
t=h+m;
porcmuj=m*100/t;
porchom=h*100/t;
printf("El porcentaje de la mujeres es %f", porcmuj);
printf(" Y el porcentaje de los hombres es %f", porchom);
return 0;
}
