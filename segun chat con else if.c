#include <stdio.h>

int main()
{
	int num1, num2, num3, mayor, medio, menor;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);
	
	if (num1 >= num2 && num1 >= num3) {
		mayor = num1;
		if (num2 >= num3) {
			medio = num2;
			menor = num3;
		} else {
			medio = num3;
			menor = num2;
		}
	} else if (num2 >= num1 && num2 >= num3) {
		mayor = num2;
		if (num1 >= num3) {
			medio = num1;
			menor = num3;
		} else {
			medio = num3;
			menor = num1;
		}
	} else { // num3 es el mayor
		mayor = num3;
		if (num1 >= num2) {
			medio = num1;
			menor = num2;
		} else {
			medio = num2;
			menor = num1;
		}
	}
	
	printf("El orden de mayor a menor de los 3 numeros es: %d>%d>%d\n", mayor, medio, menor);
	
	return 0;
}
