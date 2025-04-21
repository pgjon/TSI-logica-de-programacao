/*
    1.6 Escreva  um  algoritmo  para  ler  as  dimensões  de  uma  cozinha  retangular  (comprimento,
        largura e altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas
        as suas paredes (considere que não será descontado a área ocupada por portas e janelas). Cada
        caixa de azulejos possui 1,5 m².

            [Entrada]                       [Saída]
            4.5 (comprimento)
            3 (largura)
            2.8 (altura)
                                            28 (quantidade de caixas)
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguses");

    // variáveis
    float length, heigth, width, result;

    // entrada dados
    printf("\nDigite abaixo as dimensões da cozinha:\n");

    printf("Comprimento: ");
    scanf("%f", &length);

    printf("Largura: ");
    scanf("%f", &heigth);

    printf("Algura: ");
    scanf("%f", &width);
    // processamento
    result = (2 * (length + heigth) * width / 1.5);

    // saída dados
    printf("\n%.2f (quantidade de caixas)", result);

    return 0;
}
