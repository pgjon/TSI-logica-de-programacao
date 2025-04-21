/*
    5   Escreva um algoritmo para ler 2 valores e uma das seguintes operações a serem executadas
        (codificada  da  seguinte  forma:  1.Adição,  2.Subtração,  3.Divisão,  4.Multiplicação).  Calcular  e
        escrever o resultado dessa operação sobre os dois valores lidos.

        [Entrada]     | [Entrada]      | [Entrada]        | [Entrada]
        5             | 10             | 7                | 12
        3             | 3              | 2                | 5
        1 (adição)    | 2  (subtração) | 3 (divisão)      | 4 (multiplicação)
                    |                |                  |
        [Saída]       | [Saída]        | [Saída]          | [Saída]
        8 (resultado) | 7 (resultado)  | 3.5 (resultado)  | 60 (resultado)
*/

#include <stdio.h>

int main()
{

    int operacao;
    float num_1, num_2, resultado;

    printf("\nAbaixo esta uma calculadora que faz as seguintes operacoes 1.Adicao,  2.Subtracao,  3.Divisao,  4.Multiplicacao");

    printf("\nValor do primeiro numero: ");
    scanf("%f", &num_1);
    printf("Valor do segundo numero: ");
    scanf("%f", &num_2);
    printf("Qual operacao deseja fazer: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        resultado = num_1 + num_2;
        break;
    case 2:
        resultado = num_1 - num_2;
        break;
    case 3:
        resultado = num_1 / num_2;
        break;
    case 4:
        resultado = num_1 * num_2;
        break;

    default:
        printf("Operacao invalida!\nPrograma encerrado!");
    }

    printf("Resultado da operacao e: %.2f", resultado);

    return 0;
}