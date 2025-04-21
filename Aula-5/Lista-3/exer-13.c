/*
    13) Um posto está vendendo combustíveis com a seguinte tabela de descontos:

        • Álcool: Até 20 litros, desconto de 3 % por litro.
        • Acima de 20 litros, desconto de 5 % por litro.
        • Gasolina: até 15 litros, desconto de 3,5 % por litro.
        • Acima de 15 litros, desconto de 6 % por litro

        Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado
        da  seguinte  forma:  1-álcool  2-Gasolina),  calcule  e  imprima  o  valor  a  ser  pago  pelo  cliente,
        sabendo-se que o preço da gasolina é de R$ 6,53 o litro e o álcool R$ 5,47.
        cod chcp 65001 no terminal para corrigir problemas de caracteres especiais
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Constantes
    const float ALCOOL_PRECO = 5.47;
    const float GASOLINA_PRECO = 6.53;
    const float DESCONTO_ALCOOL_ATE_20 = 0.03;
    const float DESCONTO_ALCOOL_ACIMA_20 = 0.05;
    const float DESCONTO_GASOLINA_ATE_15 = 0.035;
    const float DESCONTO_GASOLINA_ACIMA_15 = 0.06;

    // Variáveis
    int litros, tipoCombustivel;
    float valorTotal, desconto;

    // Entradas
    printf("Digite o combustível (1-álcool, 2-gasolina): ");
    scanf("%d", &tipoCombustivel);

    if (tipoCombustivel != 1 && tipoCombustivel != 2)
    {
        printf("Tipo de combustível inválido!\n");
        return 1; // Termina o programa com erro
    }

    printf("Digite a quantidade de litros: ");
    scanf("%d", &litros);

    // Processamento
    if (tipoCombustivel == 1)
    { // Álcool
        if (litros <= 20)
        {
            desconto = ALCOOL_PRECO * DESCONTO_ALCOOL_ATE_20;
        }
        else
        {
            desconto = ALCOOL_PRECO * DESCONTO_ALCOOL_ACIMA_20;
        }
        valorTotal = (ALCOOL_PRECO - desconto) * litros;
    }
    else if (tipoCombustivel == 2)
    { // Gasolina
        if (litros <= 15)
        {
            desconto = GASOLINA_PRECO * DESCONTO_GASOLINA_ATE_15;
        }
        else
        {
            desconto = GASOLINA_PRECO * DESCONTO_GASOLINA_ACIMA_15;
        }
        valorTotal = (GASOLINA_PRECO - desconto) * litros;
    }

    // Saída
    printf("Valor total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}