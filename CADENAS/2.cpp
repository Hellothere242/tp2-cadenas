#include <stdio.h>
#include <string.h>

int main() {

    int cantA = 0, cantE = 0, cantI = 0, cantO = 0, cantU = 0;
    int i = 0;
    char cadena[50];

    printf("Ingrese palabra: ");
    fgets(cadena, sizeof(cadena), stdin);

    for (i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == 'a' || cadena[i] == 'A') {
        cantA++;}
        if (cadena[i] == 'e' || cadena[i] == 'E') {
        cantE++;}
        if (cadena[i] == 'i' || cadena[i] == 'I') {
    	cantI++;}
        if (cadena[i] == 'o' || cadena[i] == 'O') {
        cantO++;}
        if (cadena[i] == 'u' || cadena[i] == 'U') {
    	cantU++;}}

    printf("\nvocales encontradas:\n");
    printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", cantA, cantE, cantI, cantO, cantU);

    return 0;
}

