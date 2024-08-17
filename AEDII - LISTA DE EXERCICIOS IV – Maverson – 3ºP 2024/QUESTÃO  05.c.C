#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    float custoFabrica, custoConsumidor;
    float percentDistribuidor = 0.28;
    float percentImpostos = 0.45;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    custoConsumidor = custoFabrica + (custoFabrica * percentDistribuidor) + (custoFabrica * percentImpostos);

    printf("O valor final a ser pago pelo consumidor é: R$ %.2f\n", custoConsumidor);

    return 0;
}
