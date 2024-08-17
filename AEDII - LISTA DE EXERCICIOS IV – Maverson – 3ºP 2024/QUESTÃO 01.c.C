#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL,"Portuguese");

    float lado; // variável para armazenar o lado do quadrado
    float area; // variável para armazenar a área do quadrado

    // Solicita ao usuário que informe o lado do quadrado
    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a área do quadrado
    area = lado * lado;

    // Calcula o dobro da área
    float dobro_area = 2 * area;

    // Imprime o resultado
    printf("O dobro da área do quadrado é: %.2f\n", dobro_area);

    return 0;
}
