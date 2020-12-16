#include<stdio.h>
#include<stdlib.h>
int main()
{
int num,f,i;
f=1;
printf("ingrese un numero para factorizar \n");
scanf("%d",&num);
for (i=1; i<=num; i++){
f=f*i;
}
printf("el resultado es %d \n",f);
return 0;
}
