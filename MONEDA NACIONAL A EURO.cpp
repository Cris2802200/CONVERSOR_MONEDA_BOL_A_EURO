//CONVERSOR DE MONEDA NACIONAL A EURO
#include<stdio.h>
int main(){
	int a,z;
	float b,e,c;
	while(z==0){
	
	printf("QUE CONVERSION DESEA REALIZAR: \n1.BOLIVIANOS A EUROS\n2.EUROS A BOLIVIANOS\n");
	scanf("%d",&a);
	
	switch(a){
	
	case 1:
		printf("INGRESE EL MONTO EN BOLIVIANOS\n");
		scanf("%f",&b);
		c=(b*0.14);
		printf(" LA CONVERSION ES DE: %2.f EUROS\n ",c);
		break;
	
	case 2:
		printf("INGRESE EL MONTO EN EUROS\n");
		scanf("%f",&e);
		c=e*6.90;
		printf(" LA CONVERISON ES DE: %2.f BOLIVIANOS\n ",c);
		break;
		default:
		printf("OPCION INCORRECTA ):\n");

	}	
	printf("INGRESAR NUEVOS MONTOS SI=0 / NO=1\n");
	scanf("%d",&z);
	if(z!=0){
		z++;
	}
	
}
	return 0;
}