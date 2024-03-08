#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void exercicioum() {
    int populacaopais = 214;
    int peso = 56;
    char oxigenio = 'O';

    printf("Populacao do Brasil: %d milhoes\nPeso: %d\nSimbolo do Oxigenio: %c", populacaopais, peso, oxigenio);
}

void exerciciodois() {
    double percentage = 0.5 * 100;
    char date[] = "31/12/2000";
    double capital = 50000000.00;

    printf("a) \"Vendemos %.2f%% a mais que no ano passado.\"\nb) Em %s nosso capital era de R$ %.2f\nc) A barra utilizada para pastas seria '/' ou '\\'?", percentage, date, capital);
}

void exerciciotres() {
    char inputchar;

    printf("Insira um caracter: ");

    // scanf("%c", &inputchar);
    // inputchar = getch();
    // inputchar = getche();
    inputchar = getchar();

    printf("\nO codigo ASCII do caracter %c: %d", inputchar, inputchar);
}

void exerciciocinco() {
    float valor1;
    float valor2;

    printf("\nInsira um valor numerico: ");
    scanf("%d", valor1);

    printf("\nInsira outro valor numerico: ");
    scanf("%d", valor2);

    float soma = valor1 + valor2;
    float divisao = valor1/valor2;
    float multiplicacao = valor1*valor2;
    float mediaaritmetica = (valor1+valor2)/2;

    printf("\nSoma: %lf\nDivisao: %lf\nMultiplicacao: %lf\nMedia aritmetica: %lf", soma, divisao, multiplicacao, mediaaritmetica);
}

int main() {
    exerciciocinco();


    return 0;
}