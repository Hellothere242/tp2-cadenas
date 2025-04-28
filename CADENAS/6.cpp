#include <stdio.h>
#include <string.h>

int main() {
    char cadena[200];
    int inicio[100], largo[100];
    int i, totalPalabras = 0, enPalabra = 0;

    printf("Ingrese una oracion: ");
    fgets(cadena, sizeof(cadena), stdin);

    int n = strlen(cadena);
    if (n > 0 && cadena[n-1] == '\n') {
    cadena[n-1] = '\0';
    n--;}

    for (i = 0; i <= n; i++) {
        if (cadena[i] != ' ' && cadena[i] != '\0') {
        if (!enPalabra) {
        enPalabra = 1;
        inicio[totalPalabras] = i;}
        } else {
        if (enPalabra) {
        enPalabra = 0;
        largo[totalPalabras++] = i - inicio[totalPalabras];
        }}}

    for (i = totalPalabras - 1; i >= 0; i--) {
        printf("%.*s", largo[i], cadena + inicio[i]);
        if (i > 0) printf(" ");}
    printf("\n");

    return 0;}

