/*
    1.3 Escreva um algoritmo para ler o salário mensal e o percentual de reajuste. Calcular e escrever
        o valor do novo salário.

        [Entrada]                       [Saída]
        500 (salário mensal)
        15 (percentual de reajuste)
                                        575 (salário reajustado)

*/

# include <stdio.h>
# include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // variáveis
    float salarioMensal, novoSalario, reajuste;

    // entrada de dados
    printf("Salario mensal: ");
    scanf("%f", &salarioMensal);

    printf("Reajuste? ");
    scanf("%f", &reajuste);

    // processamento
    novoSalario = salarioMensal + salarioMensal * reajuste / 100;

    // Saidas
    printf("%.2f (salário reajustado)\n", novoSalario);

    return 0;
}