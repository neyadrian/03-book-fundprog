// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = p * R2

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    
    float area, raio;

    printf("Digite o raio: ");
    scanf("%f", raio);

    area = PI * pow(raio, -2);

    printf("A área é: %.2f\n", area);

    return 0;
}