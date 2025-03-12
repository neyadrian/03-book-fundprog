/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento. */

#include <stdio.h>

int main() {
    
    float dep, taxa, rend, total;

    printf("Digite o valor do depósito: ");
    scanf("%f", &dep);

    printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);

    rend = dep * taxa / 100;
    total = dep + rend;

    printf("Valor do rendimento: %.2f\n", rend);
    printf("Valor total: %.2f\n", total);

    return 0;
}