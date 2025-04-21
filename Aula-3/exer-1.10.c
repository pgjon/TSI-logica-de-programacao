/*
    1.10  Uma loja vende bicicletas com um acréscimo de 50% sobre o seu preço de custo. Ela paga 
          a cada vendedor 2 salários mínimos mensais, mais uma comissão de 15 % sobre o preço de custo 
          de  cada  bicicleta  vendida,  dividida  igualmente  entre  eles.  Escreva  um  algoritmo  que  leia  o 
          número de empregados da loja, o valor do salário mínimo, o preço de custo de cada bicicleta, o 
          número de bicicletas vendidas, calcule  e escreva: O salário  final de cada empregado e o lucro 
          (líquido) da loja. 
          [Entrada]                                 [Saída] 
          4   (quantidade de empregados da loja) 
          300 (valor do salário mínimo) 
          150 (preço de custo de cada bicicleta) 
          200 (quantidade de bicicletas vendidas) 
                                                    1725 (salário final de cada empregado) 
                                                    8100 (lucro da loja)
*/
#include <stdio.h>

int main() {
    // Variables
    int numeroDeEmpregados, numeroDeBikesVendidas;
    float salarioMinimo, precoCustoBike, salarioFinal, lucroLoja, precoVendaBike, comissaoTotal, comissaoPorVendedor;

    // Inputs
    printf("Digite a quantidade de empregados: ");
    scanf("%d", &numeroDeEmpregados);

    printf("Digite valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o preco de custo de cada bicicleta: ");
    scanf("%f", &precoCustoBike);

    printf("Digite a quantidade de bicicletas vendidas: ");
    scanf("%d", &numeroDeBikesVendidas);

    // Processing
    precoVendaBike = precoCustoBike * 1.5; // 50% acrescimo sobre o preco de custo
    
    // Comissão é 15% sobre o preço de custo de CADA bicicleta vendida
    comissaoTotal = (precoCustoBike * 0.15) * numeroDeBikesVendidas;
    comissaoPorVendedor = comissaoTotal / numeroDeEmpregados;
    
    // Salário final: 2 salários mínimos + comissão
    salarioFinal = (salarioMinimo * 2) + comissaoPorVendedor;
    
    // Lucro líquido: 
    // (Valor total vendido) - (Custo total das bicicletas) - (Total de salários pagos)
    float valorTotalVendido = precoVendaBike * numeroDeBikesVendidas;
    float custoTotalBicicletas = precoCustoBike * numeroDeBikesVendidas;
    float totalSalarios = salarioFinal * numeroDeEmpregados;
    
    lucroLoja = valorTotalVendido - custoTotalBicicletas - totalSalarios;

    // Outputs
    printf("\n%.0f (salario final de cada empregado)\n", salarioFinal);
    printf("%.0f (lucro loja)\n", lucroLoja);

    return 0;
}