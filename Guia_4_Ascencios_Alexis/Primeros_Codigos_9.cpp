#include<stdio.h>
#include <stdlib.h>

int main()
{
float sueldo=0,hs=0;
char cat;
printf("Ingrese su categoria\n");
scanf("%c",&cat);
printf("Ingrese las horas trabajadas\n");
scanf("%f",&hs);

if (cat=='a'){
sueldo=hs*200;
}
else{
if (cat=='b'){
sueldo=hs*180;
}
else{
sueldo=hs*150;
}
}
printf("Su sueldo es %f\n", sueldo);
return 0;
}
