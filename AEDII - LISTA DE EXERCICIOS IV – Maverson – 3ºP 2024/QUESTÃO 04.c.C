
}#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL,"Portuguese");
    float kg_pescado, kg_excedente, multa;

    // Entrada da quantidade de peixe pescado em Kg
    printf("Informe a quantidade de peixe pescado em Kg: ");
    scanf("%f", &kg_pescado);

    // Verificar se o pescador ultrapassou a coleta de 50Kg
    if (kg_pescado > 50) {
        // Calcular o valor excedente em Kg
        kg_excedente = kg_pescado - 50;
        // Calcular o valor da multa
        multa = kg_excedente * 4;
        printf("Você ultrapassou a coleta de 50Kg em %.2fKg.\n", kg_excedente);
        printf("Você deve pagar uma multa de R$ %.2f.\n", multa);
    } else {
        printf("Você não ultrapassou a coleta de 50Kg. Não há multa a pagar.\n");
    }

    return 0;
}
