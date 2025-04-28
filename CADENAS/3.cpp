#include <stdio.h>
#include <string.h>

char palabra[100], invertida[100];
int i, longitud, comparacion;

int main() {
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    longitud = strlen(palabra);

    for(i = 0; i < longitud; i++) {
    invertida[i] = palabra[longitud - 1 - i];}
    invertida[longitud] = '\0'; 
    comparacion = strcmp(palabra, invertida);
    
    if(comparacion == 0) {
    printf("%s: es un palindromo.\n", palabra);}
    else {
    printf("%s: no es un palindromo.\n", palabra);}

    return 0;}
