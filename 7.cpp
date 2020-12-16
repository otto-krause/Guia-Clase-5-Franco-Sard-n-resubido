#include<stdio.h>
#include<stdlib.h>
int main(){
int i,i1,dv,vt,vm,vg,mv;
for (i=1; i<=20; i++){
for (i=1; i<=15; i++){
printf("ingrese la venta del dia \n %d ",i);
scanf("%d",&dv);
vt=vt+dv;
if (vm<dv){
vm=dv;
mv=i;
}
}
printf("la venta total del vendedor %d es %d \n",i,vt);
vg=vg+vt;
}
printf("la venta general es %d y la mejor venta fue hecha por el vendedor &d por",vg,mv,vm);
return 0;
}
