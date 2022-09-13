#include <stdio.h>

#define TAMANHO_TEXTO 23
#define QTD_LETRAS 26

int main() {

    int i = 0;
    char texto[TAMANHO_TEXTO];

    for (i = 0; i < TAMANHO_TEXTO; i++) {
        scanf("%c", &texto[i]);
    }

    for (i = 0; i < TAMANHO_TEXTO; i++) {
        texto[i] = 'A' + (texto[i] - 'A' + 3) % QTD_LETRAS;
    }

    for (i = 0; i < TAMANHO_TEXTO; i++) {
        printf("%c", texto[i]);
    }

    return 0;
}