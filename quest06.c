/* Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base. */

#include <stdio.h>

int main() {
    
    float sal, salReceber, grat, imp;

    printf("Digite o salário: ");
    scanf("%f", &sal);

    grat = sal * 5 / 100;
    imp = sal * 7 / 100;
    salReceber = sal + grat - imp;

    printf("Salário a receber: %.2f\n", salReceber);

    return 0;
}