/*
    Escreva um algoritmo para ler um número inteiro N (só aceitar valores maiores que zero. Caso o N não seja maior que zero deverá ser lido um novo valor para o N) e escrever se é ou não PRIMO. OBS: Considere que o número 1 não é primo.


    [Entrada]    | [Entrada]  | [Entrada]   | [Entrada]     | [Entrada]
    -1           | 2          | 13          | 121           | 1 20           |            |             |               |
                 |            |             |               |
    [Saída]      | [Saída]    | [Saída]     | [Saída]       | [Saída]
    Não é primo  | É primo    | É primo     | Não é primo   | Não é primo
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int N, i, primo = 0;
    // Inputs
    printf("Digite um valor (N) para informar se é primo ou não: ");
    scanf("%d", &N);
    // Processing
    while (N <= 0) {
        printf("Valor de N negativo ou 0!\nDigite valor de N: ");
        scanf("%d", &N);
    }

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            primo++;
        }
    }

    if (primo == 2) {
        printf("É primo!");
    } else {
        printf("Não é primo!");
    }
    // Outputs

    return 0;
}