#include <stdio.h>

int main() {
	int numero, uni,dec,cent,uDeMil;
	
	printf("Ingrese un número de cuatro cifras: ");
	scanf("%d", &numero);
	
	if (numero < 1000 || numero > 9999) {
		printf("------------------------------------\n");
		printf("   Ingrese un Numero de CUATRO cifras!\n");
		printf("\tPrograma Finalizado...\n");
		printf("------------------------------------\n");
		return 1;
	}
	
	uDeMil = numero / 1000;
	cent = (numero/100) % 10;
	dec = (numero/10) % 10;
	uni = numero % 10;
	
	printf("------------------------------------\n");
	printf("%d --> %d|%d|%d|%d\n",numero,uDeMil,cent,dec,uni);
	printf("------------------------------------\n");;
	
	return 0;
}
