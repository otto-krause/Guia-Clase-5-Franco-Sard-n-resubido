#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int i; 
float num, numm, pro,t; numm=0; 
t=0; 
for (i=1; i<=15; i++) { 
printf("ingrese un numero "); scanf("%f", &num); 
t=t+num; 
if (num>numm) { 
numm=num; 
} 
}
pro=t/15; 
printf("el promedio es %f",pro); 
printf("El numero mayor es %f", numm); 
return 0;} 

