// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

#include <stdio.h>
#include <math.h>

int main() {
    
    int num1, num2; 
    double r1, r2;

    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite um número: ");
    scanf("%i", &num2);

    r1 = pow(num1, num2);
    r2 = pow(num2, num1);

    printf("%i elevado a %i é igual a: %.2f\n", num1, num2, r1);
    printf("%i elevado a %i é igual a: %.2f\n", num2, num1, r2);

    return 0;
}