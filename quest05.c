/* Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre
o valor do aumento e o novo salário. */

#include <stdio.h>

int main() {
    
    float sal, perc, aumento, novoSal;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &perc);

    aumento = sal * perc / 100;

    printf("O aumento foi de: %.2f\n", aumento);

    novoSal = sal + aumento;

    printf("O novo salário é: %.2f\n", novoSal);

    return 0;
}