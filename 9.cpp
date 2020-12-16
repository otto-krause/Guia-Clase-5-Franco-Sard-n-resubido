#include<stdio.h> 
#include<stdlib.h> 
int main() { 
int s,i,c,c1; 
c=0; 
c1=0; 
for (i=1; i<=20; i++) { 
printf("Ingrese el sueldo de una persona "); scanf("%d",&s); 
if (s>2000){ 
c=c+1; 
} 
else{ 
c1=c1+1; 
} 
} 
printf("%d personas ganan mas de 2000 y %d ganan menos de 2000", c, c1); 
}
