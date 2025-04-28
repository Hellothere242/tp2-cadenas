#include <stdio.h>
#include <string.h>

int main() {
    char palabra1[100], palabra2[100];
    char temp;
    int i, j, len;

    printf("Primera palabra: ");
    scanf("%s", palabra1);
    printf("Segunda palabra: ");
    scanf("%s", palabra2);

    if (strlen(palabra1) != strlen(palabra2)) {
        printf("No son anagramas.\n");
        return 0;}

    len = strlen(palabra1);
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
        if (palabra1[j] > palabra1[j + 1]) {
        temp = palabra1[j];
        palabra1[j] = palabra1[j + 1];
    	palabra1[j + 1] = temp;}}}

    len = strlen(palabra2);
    for (i = 0; i < len - 1; i++) {
    for (j = 0; j < len - i - 1; j++) {
    if (palabra2[j] > palabra2[j + 1]) {
    temp = palabra2[j];
    palabra2[j] = palabra2[j + 1];
    palabra2[j + 1] = temp;}}}
                
    if (strcmp(palabra1, palabra2) == 0) {
    printf("Son anagramas.\n");
    } else {
    printf("No son anagramas.\n");}
    return 0;}

