/*
 ============================================================================
 Name        : TP-paradigmas.c
 Author      : Lucas Gianotti
 Version     :1.0
 ============================================================================
 */

/*- Intenta leer primer carácter del texto (porque el texto puede estar
	 vacío)
	- Mientras no sea fdt, repetir:
	 (1) Estado actual del autómata: estado inicial
	 (2) Mientras no sea un estado final y no sea el estado FDT, repetir:
	 (2.1) Determinar el nuevo estado actual
	 (2.2) Actualizar el carácter a analizar
	 (3) Si el estado es final, la cadena procesada es una constante entera;
	 caso contrario, la cadena no pertenece al lenguaje.*/



#include <stdio.h>
#include <stdlib.h>
#define NUM_ESTADOS 6
#define NUM_COLS 6
#define MAX_TAM_STREAM_INPUT 100
#define INITIAL_STATE 0;

int table[NUM_ESTADOS][NUM_COLS] = {
		{1,1,1,5,2,5},
		{3,3,3,4,4,5},
		{5,5,5,5,5,5},
		{3,3,3,5,2,5},
		{5,2,2,5,5,5},
		{5,5,5,5,5,5},
};

int nextState(){
	return 0;
}


int main(void) {
	char inputStream[MAX_TAM_STREAM_INPUT];
	int cont = 0;
	printf("Ingrese una cadena: ");
	gets(inputStream);
	char actualCharacter = inputStream[cont];
	while(actualCharacter != '\0'){
		int actualState = INITIAL_STATE;
		while(actualState != 2 && actualState != 4 && actualCharacter != '\0'){
			actualState = nextState();
			cont++;
			actualCharacter = inputStream[cont];
		}
	}


	return EXIT_SUCCESS;
}
