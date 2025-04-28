#include <stdio.h>
#include <string.h>

char palabra[100], copia[100], buscar, nuevo;
int i, longitud, cmp;

int main() {
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    strcpy(copia, palabra);

    printf("letra a reemplazar: ");
    scanf(" %c", &buscar);

    printf("remplazo: ");
    scanf(" %c", &nuevo);

    longitud = strlen(palabra);
    for (i = 0; i < longitud; i++) {
        if (palabra[i] == buscar) {
        copia[i] = nuevo;}}

    cmp = strcmp(palabra, copia);
    if (cmp == 0) {
    printf("No se encontro '%c' en \"%s\".\n", buscar, palabra);} 
	else {
    printf("Palabra original: \"%s\"\nPalabra modificada: \"%s\"\n", palabra, copia);}
    return 0;}

