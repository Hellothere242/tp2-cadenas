#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50];

    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("%s", nombre);

    return 0;
}

