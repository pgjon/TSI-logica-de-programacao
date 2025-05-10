/*
    6.2 Escreva um algoritmo para ler vários raios de circunferências. Para cada raio informado calcular e escrever o comprimento da respectiva circunferência. O algoritmo deve ser encerrado ao ser fornecido para o raio um valor zero ou negativo (nesta situação o comprimento não deve ser calculado).
    [Entrada]           [Saída]
    2                   12.56
    5                   31.40
    3                   18.84
    -2
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float circunferencia, raio, pi = 3.1416;

    // Inputs
    printf("Digite o raio de uma circulo para eu dizer quanto vale a circunferência: ");
    scanf("%f", &raio);

    // Processing
    while (raio > 0) {
        circunferencia = 2 * pi * raio;

        printf("%.2f\n", circunferencia);

        printf("raio: ");
        scanf("%f", &raio);
    };
    // Outputs

    return 0;
}