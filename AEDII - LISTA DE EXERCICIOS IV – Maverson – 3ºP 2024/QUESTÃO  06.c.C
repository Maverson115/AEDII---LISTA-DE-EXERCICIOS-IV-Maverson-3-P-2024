#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    float distancia, tempo, velocidadeMedia, litros;

    printf("Digite a distância percorrida em Km: ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média em Km/h: ");
    scanf("%f", &velocidadeMedia);

    litros = distancia / 12.0;
    printf("A quantidade de litros de gasolina utilizados na viagem é: %.2f litros\n", litros);

    return 0;
}
