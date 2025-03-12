/* Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado; 
d) a raiz cúbica do número digitado. */

#include <stdio.h>
#include <math.h>

int main() {
    
    int num;
    float quad, cubo, r2, r3;

    printf("Digite o um número positivo maior que zero: ");
    scanf("%i", &num);

    quad = pow(num, 2);
    cubo = pow(num, 3);
    r2 = sqrt(num);
    r3 = sqrt(num);

    printf("Quadrado: %.2f\n Cubo: %.2f\n Raiz Quadrada: %2.f\n Raiz Cúbica: %2.f\n", quad, cubo, r2, r3);

    return 0;
}