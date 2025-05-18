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

# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int operacao;
    float num_1, num_2, resultado;

    printf("\nAbaixo está uma calculadora que faz as seguintes operacões 1.Adição,  2.Subtração,  3.Divisão,  4.Multiplicação");

    printf("\nValor do primeiro número: ");
    scanf("%f", &num_1);
    printf("Valor do segundo número: ");
    scanf("%f", &num_2);
    printf("Qual operação deseja fazer: ");
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
        printf("Operação inválida!\nPrograma encerrado!");
    }

    printf("Resultado da operação e: %.2f", resultado);

    return 0;
}