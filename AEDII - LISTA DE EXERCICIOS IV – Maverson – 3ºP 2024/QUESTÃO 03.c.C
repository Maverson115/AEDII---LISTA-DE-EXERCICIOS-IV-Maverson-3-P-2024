#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
setlocale(LC_ALL,"Portuguese");
    float num1, num2;

    // Solicita ao usu�rio que digite dois n�meros reais
    printf("Digite o primeiro n�mero real: ");
    scanf("%lf", &num1);
    printf("Digite o segundo n�mero real: ");
    scanf("%lf", &num2);

    // Calcula o produto do dobro do primeiro n�mero digitado
    float produto = 2 * num1 * num1;

    // Calcula a soma do triplo do primeiro n�mero com a metade do segundo n�mero
    float soma = 3 * num1 + num2 / 2;

    // Calcula a raiz quadrada da soma do primeiro n�mero com o segundo n�mero
    float raizQuadrada = sqrt(num1 + num2);

    // Mostra na tela os resultados
    printf("O produto do dobro do primeiro n�mero digitado �: %.2lf\n", produto);
    printf("A soma do triplo do primeiro n�mero com a metade do segundo n�mero �: %.2lf\n", soma);
    printf("A raiz quadrada da soma do primeiro n�mero com o segundo n�mero �: %.2lf\n", raizQuadrada);

    return 0;
}
