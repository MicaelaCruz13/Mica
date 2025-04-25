#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Crea un programa en C que genere un n�mero aleatorio entre 1 y 100. El usuario debe adivinar el n�mero en un m�ximo de 7 intentos.
El usuario ingresa un n�mero y el programa responde
"Muy alto" si el n�mero es mayor al generado.
"Muy bajo" si es menor.
"�Adivinaste!" si es correcto.
Si el usuario no acierta en 7 intentos, el programa muestra el n�mero secreto.
El usuario puede jugar nuevamente al finalizar, a menos que seleccione la opci�n de no jugar. 
Es importante que se guarde la cantidad de veces que el usuario gan� y se muestre al final cuando coloca que ya no quiere seguir jugando. 
*/

int main(){
	
	srand(time(NULL));
	int numeroSecreto,seguir;
	int numero;
	
	printf("---------------------------------------------------\n");
	printf("\tBIENVENIDO AL JUEGO DE LA ADIVINANZA\t\n");
	printf("Tendras 7 intentos para adivinar el numero oculto\n");
	printf("\tEl numero esta oculto entre 0 y 100\n");
	printf("---------------------------------------------------\n");
	
	do{
		int intentosMaximos = 7;
		int intentosRealizados=0;
		numeroSecreto = rand() % 101;
		
		while(intentosRealizados < intentosMaximos){
			
			printf("Ingrese un numero: ");
			scanf("%d",&numero);
			intentosRealizados ++;
			
			if(numero==numeroSecreto){
				printf("---------------------------------------------------\n");
				printf("Felicidades has adivinado el numero! en %d intentos\n",intentosRealizados);
				printf("---------------------------------------------------\n");
				break;
			}else if(numero < numeroSecreto){
				printf("---------------------------------------------------\n");
				printf("MUY BAJO!!\n");
				printf("Te quedan %d intentos\n",intentosMaximos-intentosRealizados);
				printf("---------------------------------------------------\n");
			}else{
				printf("---------------------------------------------------\n");
				printf("MUY ALTO!!\n");
				printf("Te quedan %d intentos\n",intentosMaximos-intentosRealizados);
				printf("---------------------------------------------------\n");
				
			}
		}
		
		if(intentosRealizados == intentosMaximos){
			printf("---------------------------------------------------\n");
			printf("GAME OVER || GAMER OVER || GAME OVER || GAME OVER\n");
			printf("\t   EL NUMERO SECRETO ERA %d\n",numeroSecreto);
			printf("GAME OVER || GAMER OVER || GAME OVER || GAME OVER\n");
			printf("---------------------------------------------------\n");
		}
		printf("Desea Jugar de Nuevo?\n1-Si\n2-No\nIngrese su respuesta: ");
		scanf("%d",&seguir);
		
		if(seguir == 2){
			printf("---------------------------------------------------\n");
			printf("\t\tJUEGO FINALIZADO...\n");
			printf("---------------------------------------------------\n");
		}
	}while(seguir==1);
	
	return 0;
}
