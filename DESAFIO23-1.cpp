#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int carta, puntos;
	srand(time(NULL));  
	int aleatorio = (rand() % 13) + 1;  
	printf("JUEGO DE ALTA-BAJA\n");
	printf("Deberas adivinar la carta generada que puede ser de 1 a 13.\n");
	printf("¡¡LA CARTA YA HA SIDO GENERADA!!\n\n");
	puntos = 1;
	do {
		printf("Ingrese su opcion de carta mayor o menor a 7 (1-13) ");
		scanf("%d", &carta);
		if (carta < 1 || carta > 13) {  
			printf("Gracias por jugar! Saliste con %d puntos.\n", puntos);
			switch (aleatorio) {
			case 1:
				printf("La carta era: A\n");
				break;
			case 11:
				printf("La carta era: J\n");
				break;
			case 12:
				printf("La carta era: Q\n");
				break;
			case 13:
				printf("La carta era: K\n");
				break;
			default:
				printf("La carta era: %d\n",aleatorio);
			};
			break;
		}
		if (carta < 7 && aleatorio > 7) {
			printf("Muy bajo! Suerte para la proxima\n");
			switch (aleatorio) {
			case 11:
				printf("La carta era ALTA: J\n");
				break;
			case 12:
				printf("La carta era ALTA: Q\n");
				break;
			case 13:
				printf("La carta era ALTA: K\n");
				break;
			default:
				printf("La carta era ALTA: %d\n",aleatorio);
			}
			printf("Gracias por jugar! Saliste con %d puntos.\n", puntos);
			break;
		}
		if (carta > 7 && aleatorio < 7) {
			printf("Muy alto! Suerte para la proxima\n");
			switch (aleatorio) {
			case 1:
				printf("La carta eraBAJA: A\n");
				break;
			default:
				printf("La carta era BAJA: %d\n",aleatorio);
			}
			printf("Gracias por jugar! Saliste con %d puntos.\n", puntos);
			break;
		}
		if (aleatorio == 7) {
			printf("HAS PERDIDO, LA CARTA ALEATORIA ERA: %d\n", aleatorio);
			break;
		}
		if (carta==aleatorio) {
			printf("CORRECTO! HAS ADIVINADO LA CARTA ALEATORIA\n");
			puntos = puntos * 2; 
			printf("LLEVA %d PUNTOS ACUMULADOS\n", puntos);
			printf("¡¡JUGUEMOS NUEVAMENTE!!\n\n");
			aleatorio = (rand() % 13) + 1;  
			carta=aleatorio;
		}
	} while (carta==aleatorio);  
	return 0;
}
