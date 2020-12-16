#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, np,c,pc,nt; int i; 
c=0; 
for (i=1; i<=30; i++) { 
printf("Ingrese las 10 notas del alumno N°%d ", i);
scanf("%f%f%f%f%f%f%f%f%f%f",&n1,&n2, &n3,&n4,&n5,&n6,&n7, &n8, &n9, &n10); nt=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10; 
np=nt/10; 
printf("El promedio del alumno %d es %f", i, np); 
c=c+np; 
} 
pc=c/30; 
printf("El promedio a de la clase %f",pc); 
} 
