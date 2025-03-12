// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2

#include <stdio.h>

int main() {
    
    int base, altura, area;

    printf("Digite o valor da base: ");
    scanf("%i", &base);

    printf("Digite o valor da altura: ");
    scanf("%i", &altura);

    area = (base * altura) / 2;

    printf("O valor da área é: %i\n", area);

    return 0;
}