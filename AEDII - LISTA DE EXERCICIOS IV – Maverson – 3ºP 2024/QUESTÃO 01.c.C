#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"Portuguese");

    float lado; // vari�vel para armazenar o lado do quadrado
    float area; // vari�vel para armazenar a �rea do quadrado

    // Solicita ao usu�rio que informe o lado do quadrado
    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a �rea do quadrado
    area = lado * lado;

    // Calcula o dobro da �rea
    float dobro_area = 2 * area;

    // Imprime o resultado
    printf("O dobro da �rea do quadrado �: %.2f\n", dobro_area);

    return 0;
}
