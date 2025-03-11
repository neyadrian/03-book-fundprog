// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>

int main() {
    
    float n1, n2, n3, mediaPond;
    int p1, p2, p3;

    printf("Digite a primeira nota e seu respectivo peso: ");
    scanf("%f %i", &n1, &p1);

    printf("Digite a segunda nota e seu respectivo peso: ");
    scanf("%f %i", &n2, &p2);

    printf("Digite a terceira nota e seu respectivo peso: ");
    scanf("%f %i", &n3, &p3);

    mediaPond = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("A média ponderada é: %.2f\n", mediaPond);

    return 0;
}