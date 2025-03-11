/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
que este sofreu um aumento de 25%.*/

#include <stdio.h>

int main() {
    
    float sal, novoSal;

    printf("Digite o salário atual: ");
    scanf("%f", &sal);

    novoSal = sal + sal * 0.25;

    printf("O novo salário é igual a: %.2f\n", novoSal);

    return 0;
}