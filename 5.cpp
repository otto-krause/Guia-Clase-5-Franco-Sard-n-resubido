#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int num,po,i,t; 
t=1; 
printf("Ingrese un número "); 
scanf("%d", &num); 
printf("Ingrese una potencia "); 
scanf("%d",&po); 
for (i=1; i<=po;i++){ 
t=t*num; 
} 
printf("El resultado es %d", t); 
} 

