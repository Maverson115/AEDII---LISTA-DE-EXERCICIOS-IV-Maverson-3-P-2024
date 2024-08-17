#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    float celsius, fahrenheit;

    // Solicita a temperatura em graus Celsius ao usuário
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Converte a temperatura de Celsius para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibe a temperatura em graus Fahrenheit
    printf("%.1f graus Celsius é igual a %.1f graus Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
