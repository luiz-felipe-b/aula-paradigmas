#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void usarScanf() {
    char caractere;
    printf("\n----------\n");
    printf("Exercício 3:\n");
    printf("----------\n");
    printf("Digite um caractere (usando scanf): ");
    scanf("%c", &caractere);
    printf("O codigo ASCII de '%c' eh: %d\n", caractere, caractere);
}

void usarGetch() {
    char caractere;

    printf("\nDigite um caractere (usando getch): ");
    caractere = getch();
    printf("O codigo ASCII de '%c' eh: %d\n", caractere, caractere);
}

void usarGetche() {
    char caractere;

    printf("\nDigite um caractere (usando getche): ");
    caractere = getche();
    printf("O codigo ASCII de '%c' eh: %d\n", caractere, caractere);
}

int main() {
    usarScanf();
    usarGetch();
    usarGetche();

    return 0;
}