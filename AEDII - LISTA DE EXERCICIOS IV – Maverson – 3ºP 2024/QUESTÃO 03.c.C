#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
setlocale(LC_ALL,"Portuguese");
    float num1, num2;

    // Solicita ao usuário que digite dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número real: ");
    scanf("%lf", &num2);

    // Calcula o produto do dobro do primeiro número digitado
    float produto = 2 * num1 * num1;

    // Calcula a soma do triplo do primeiro número com a metade do segundo número
    float soma = 3 * num1 + num2 / 2;

    // Calcula a raiz quadrada da soma do primeiro número com o segundo número
    float raizQuadrada = sqrt(num1 + num2);

    // Mostra na tela os resultados
    printf("O produto do dobro do primeiro número digitado é: %.2lf\n", produto);
    printf("A soma do triplo do primeiro número com a metade do segundo número é: %.2lf\n", soma);
    printf("A raiz quadrada da soma do primeiro número com o segundo número é: %.2lf\n", raizQuadrada);

    return 0;
}
