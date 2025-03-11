// Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

int main() {
     
    int num1, num2, num3, num4, soma;

    printf("Digite o primeiro número: ");
    scanf("%i", &num1);

    printf("Digite o segundo número: ");
    scanf("%i", &num2);

    printf("Digite o terceiro número: ");
    scanf("%i", &num3);

    printf("Digite o quarto número: ");
    scanf("%i", &num4);

    soma = num1 + num2 + num3 + num4;

    printf("A soma dos números é: %i\n", soma);

    return 0;
}