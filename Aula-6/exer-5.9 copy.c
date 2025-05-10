/*
    5.9 Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha de Gude o jogador deve pesar entre 70 Kg (inclusive) a 80 Kg (inclusive) e medir de 1,75 m (inclusive) a 1,90 m (inclusive). Escreva um algoritmo para ler a altura e o peso de um jogador e determine se o jogador está apto a participar do campeonato escrevendo uma das seguintes mensagens conforme cada situação.

    “RECUSADO POR ALTURA” -(se somente a altura do jogador for inválida)
    “RECUSADO POR PESO” -(se somente o peso do jogador for inválido)
    “TOTALMENTE RECUSADO”-(se a altura e o peso do jogador for inválido)
    “ACEITO” -(se a altura e o peso do jogador estiverem dentro da faixa especificada)

    [Entrada]           | [Entrada]           | [Entrada]
    1.40 (altura)       | 1.50 (altura)       | 1.70 (altura)
    60   (peso)         | 75   (peso)         | 85 (peso)
                        |                     |
    [Saída]             | [Saída]             | [Saída]
    TOTALMENTE RECUSADO | RECUSADO POR ALTURA | TOTALMENTE RECUSADO
    --------------------+---------------------+---------------------
    [Entrada]           | [Entrada]           | [Entrada]
    1.77 (altura)       | 1.80 (altura)       | 1.85 (altura)
    62   (peso)         | 75   (peso)         | 90 (peso)
                        |                     |
    [Saída]             | [Saída]             | [Saída]
    RECUSADO POR PESO   | ACEITO              | RECUSADO POR PESO
    --------------------+---------------------+---------------------
    [Entrada]           | [Entrada]           | [Entrada]
    1.92 (altura)       | 1.95 (altura)       | 2.00 (altura)
    50   (peso)         | 77   (peso)         | 95 (peso)
                        |                     |
    [Saída]             | [Saída]             | [Saída]
    TOTALMENTE RECUSADO | RECUSADO POR ALTURA | TOTALMENTE RECUSADO 
*/

#include <stdio.h>
// FEITO COM CHATGPT 4.1
int main() {
    float peso, altura;

    // Entrada de dados
    printf("Digite o peso do jogador (em Kg): ");
    scanf("%f", &peso);

    printf("Digite a altura do jogador (em metros): ");
    scanf("%f", &altura);

    // Verificações
    int peso_valido = (peso >= 70.0 && peso <= 80.0); //recebe 1 se estiver na faixa, caso contrario, recebe 0
    int altura_valida = (altura >= 1.75 && altura <= 1.90); // mesma situação acima.

    if (!peso_valido && !altura_valida) {
        printf("TOTALMENTE RECUSADO\n");
    } else if (!peso_valido) {
        printf("RECUSADO POR PESO\n");
    } else if (!altura_valida) {
        printf("RECUSADO POR ALTURA\n");
    } else {
        printf("ACEITO\n");
    }

    return 0;
}