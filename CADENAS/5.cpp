#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int i, contador = 0, palabra = 0;

    printf("Ingrese una frase: ");
    fgets(texto, sizeof(texto), stdin);

    for(i = 0; i < strlen(texto); i++) {
        	if (texto[i] == ' ' || texto[i] == '\n') {
            palabra = 0;} 
			else if (palabra == 0) {
    contador++;
    palabra = 1;}}

    printf("cantidad palabras: %d\n", contador);

    return 0;}

