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
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float peso, altura;

    // Inputs
    printf("Digite sua altura: "), scanf("%f", &altura);
    printf("Digite seu peso: "), scanf("%f", &peso);

    // Processing
    if ((peso >= 70) && (peso <= 80)) {
        if ((altura < 1.75) || (altura > 1.90)){
            printf("RECUSADO POR ALTURA");
        } else {
            printf("ACEITO");
        }
    }

    else if ((altura >= 1.75) && (altura <= 1.90)) {
        if ((peso < 70) || (peso > 80)){
            printf("RECUSADO POR PESO");
        } else {
            printf("ACEITO");
        }
    }

    else if (((altura < 1.75) || (altura > 1.90)) && ((peso < 70) || (peso > 80))){
        printf("TOTALMENTE RECUSADO");
    }

    // Outputs

    return 0;
}