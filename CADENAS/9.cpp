#include <stdio.h>
#include <string.h>

int main() {
    char oracion[1000];
    int opcion;

    printf("Ingrese una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);
    oracion[strcspn(oracion, "\n")] = '\0'; 

    printf("\nSeleccione una opcion:\n");
    printf("1. Mostrar en mayusculas\n");
    printf("2. Mostrar en minusculas\n");
    printf("3. Mostrar la oracion alternando mayusculas y minusculas\n");
    printf("4. Mostrar la oracion con la primera letra de cada palabra en mayuscula\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: {
       
            for (int i = 0; oracion[i] != '\0'; i++) {
                if (oracion[i] >= 'a' && oracion[i] <= 'z') {
                oracion[i] = oracion[i] - ('a' - 'A');
                }}
            printf("Oracion en mayusculas: %s\n", oracion);
            break;}
        case 2: {
            for (int i = 0; oracion[i] != '\0'; i++) {
                if (oracion[i] >= 'A' && oracion[i] <= 'Z') {
                oracion[i] = oracion[i] + ('a' - 'A');
                }}
            printf("Oracion en minusculas: %s\n", oracion);
            break;}
        case 3: {
            int flag = 1;
            for (int i = 0; oracion[i] != '\0'; i++) {
                if ((oracion[i] >= 'A' && oracion[i] <= 'Z') || (oracion[i] >= 'a' && oracion[i] <= 'z')) {
                if (flag) {
                if (oracion[i] >= 'a' && oracion[i] <= 'z') {
                oracion[i] = oracion[i] - ('a' - 'A');}
            	} else {
                if (oracion[i] >= 'A' && oracion[i] <= 'Z') {
                oracion[i] = oracion[i] + ('a' - 'A');
            	}}
                flag = !flag;
                }}
            printf("Oracion alternando mayusculas y minusculas: %s\n", oracion);
            break;}
        case 4: {
            int nuevo_palabra = 1;
            for (int i = 0; oracion[i] != '\0'; i++) {
                if ((oracion[i] >= 'A' && oracion[i] <= 'Z') || (oracion[i] >= 'a' && oracion[i] <= 'z')) {
                if (nuevo_palabra && oracion[i] >= 'a' && oracion[i] <= 'z') {
            	oracion[i] = oracion[i] - ('a' - 'A');
                } else if (!nuevo_palabra && oracion[i] >= 'A' && oracion[i] <= 'Z') {
                oracion[i] = oracion[i] + ('a' - 'A');
                }
                nuevo_palabra = 0;
                } else {
            	nuevo_palabra = 1;
                }}
            printf("Oracion con primera letra de cada palabra en mayuscula: %s\n", oracion);
            break;}
        default:
            printf("Opcion invalida.\n");}

    return 0;}

