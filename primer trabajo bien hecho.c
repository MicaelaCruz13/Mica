#include <stdio.h>

int main()
{
	
	int num1, num2, num3, X;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);
	
	if (num1<num2){ 
		X=num1;
		num1=num2;
		num2 = X; 
		
	}
	if (num1<num3){ 
		X=num1;
		num1=num3;
		num3 = X; 
		
	}
	if (num2<num3){ 
		X=num2;
		num2=num3;
		num3 = X; 
		
	}
	printf("El orden de mayor a menor de los 3 numeros es: %d>%d>%d ", num1, num2, num3);
	
	
	return 0;
}

