#include <stdio.h>
#include <string.h>

int main() {
    char busqueda[100], buscar[100];    

    printf("Ingrese la cadena: ");
    fgets(busqueda, sizeof(busqueda), stdin);
    busqueda[strcspn(busqueda, "\n")] = '\0'; 

    printf("Ingrese la cadena a buscar: ");
    fgets(buscar, sizeof(buscar), stdin);
    buscar[strcspn(buscar, "\n")] = '\0';

    int len_busqueda = strlen(busqueda);
    int len_buscar = strlen(buscar);

    for (int i = 0; i <= len_busqueda - len_buscar; i++) {
        int j = 0;
        while (j < len_buscar && busqueda[i + j] == buscar[j]) {
        j++;}
        
        if (j == len_buscar) {
            printf("La subcadena comienza en la posicion: %d\n", i);
            return 0; }}

    printf("La subcadena no se encuentra en la cadena.\n");

    return 0;
}

