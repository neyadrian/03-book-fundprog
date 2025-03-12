/* Sabe-se que:
   pé = 12 polegadas;
   1 jarda = 3 pés;
   1 milha = 1.760 jarda;
   Faça um programa que receba uma medida em pés, faça as conversões a seguir
   e mostre os resultados. 
   a) polegadas;
   b) jardas;
   c) milhas. */

#include <stdio.h>

int main() {
    
    float pes, polegadas, jardas, milhas;

    printf("Digite a medidas em pés: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    printf("Polegadas: %.2f\n Jardas: %.2f\n Milhas: %.6f\n", polegadas, jardas, milhas);

    return 0;
}