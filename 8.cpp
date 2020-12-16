#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
int c,c1, c2, i, num; 
c=0; 
c1=0; 
c2=0; 
for (i=1; i<=10; i++) { 
printf("Ingrese un numero "); 
scanf("%d",&num); 
if (num>0){ 
c=c+1; 
} 
else { 
if (num==0){ 
c1=c1+1; 
} 
else { 
c2=c2+1; 
} 
} 
}
printf("Hay %d números positivos, %d negativos y %d son cero", c, c2,c1); }


