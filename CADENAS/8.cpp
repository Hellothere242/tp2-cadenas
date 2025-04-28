#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][100], coincidencia[100];
    
    printf("Introduce 5 palabras diferentes:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", palabras[i]);}

    int longitud_palabra = strlen(palabras[0]);
    coincidencia[0] = '\0';
    
    for (int l = longitud_palabra; l > 0; l--) {
        for (int i = 0; i <= longitud_palabra - l; i++) {
            char subcadena[100];
            strncpy(subcadena, palabras[0] + i, l);
            subcadena[l] = '\0';

            int es_comun = 1;
            for (int j = 1; j < 5; j++) {
            if (!strstr(palabras[j], subcadena)) {
            es_comun = 0;
            break;}}
            if (es_comun) {
            strcpy(coincidencia, subcadena);
            break;}}

    if (coincidencia[0] != '\0') {
    break;}}

    if (strlen(coincidencia) > 0) {
    printf("La subcadena mas larga es: %s\n", coincidencia);
    } else {
    printf("No existe una subcadena común.\n");}
    return 0;}

