/*
    5.8 Um mercado está vendendo frutas com a seguinte tabela de preços:

    Até 5 Kg                        Acima de 5 Kg
    Morango: R$ 5,00 p/Kg           Morango: R$ 4,00 p/Kg
    Maçã:    R$ 3,00 p/Kg           Maçã:R$ 2,00 p/Kg

    Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 35,00, receberá ainda um desconto de 20 % sobre esse total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maçãs adquiridas e escreva o valor a ser pago pelo cliente.

    [Entrada]   | [Entrada]   | [Entrada]   | [Entrada]
    3 (morango) | 6 (morango) | 2 (morango) | 7 (morango)
    2 (maçã)    | 2 (maçã)    | 6 (maçã)    | 6 (maçã)
                |             |             |
    [Saída]     | [Saída]     | [Saída]     | [Saída]
    21          | 30          | 22          | 32
    ------------+-------------+-------------+-------------
    [Entrada]   | [Entrada]   | [Entrada]   | [Entrada]
    5 (morango) | 6 (morango) | 3 (morango) | 5 (morango)
    4 (maçã)    | 3 (maçã)    | 6 (maçã)    | 3 (maçã)
                |             |             |
    [Saída]     | [Saída]     | [Saída]     | [Saída]
    29.60       | 26.40       | 21.60       | 34
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int qtdKiloMorango, qtdKiloMaca;
    float valorMorango, valorMaca, valorTotal, valorDesconto;

    // Inputs
    printf("Quantidade de Kilos de Morango? "); scanf("%d", &qtdKiloMorango);
    printf("Quantidade de Kilos de Maca? "); scanf("%d", &qtdKiloMaca);

    // Processing
    if (qtdKiloMorango <= 0 || qtdKiloMaca <= 0)
        printf("Pesagem informada errada!");

    if (qtdKiloMorango <= 5) {
        valorMorango = 5 * qtdKiloMorango;
    } else{
        valorMorango = 4 * qtdKiloMorango;
    }

    if (qtdKiloMaca <= 5) {
        valorMaca = 3 * qtdKiloMaca;
    } else{
        valorMaca = 2 * qtdKiloMaca;
    }
       
    valorTotal = valorMorango + valorMaca;

    if ((qtdKiloMaca + qtdKiloMorango > 8) || (valorTotal > 35)) {
        valorDesconto = valorTotal - valorTotal * 0.2;
        printf("%.2f", valorDesconto);
    } else {
        printf("%.2f", valorTotal);
    }
        
    // Outputs

    return 0;
}