/* Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base. */

#include <stdio.h>

int main() {
    
    float sal, salReceber, imp;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    imp = sal * 10 / 100;
    salReceber = sal + 50 - imp;

    printf("Salário a receber: %.2f\n", salReceber);

    return 0;
}