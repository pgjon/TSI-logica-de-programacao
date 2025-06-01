/*
    9.11) Ler um valor A e um valor N. Imprimir a soma dos N números a partir de A(inclusive). Caso N seja negativo ou ZERO, deverá ser lido um novo N(apenas N).
                    Exemplo:
                                A   N   SOMA
                                3   2    7 (3+4)
                                4   5   30 (4+5+6+7+8)

    [Entrada]       |       [Entrada]       |       [Entrada]
    3 (A)           |       4 (A)           |       10 (A)
    -1 (N)          |       5 (N)           |       3  (N)
    0 (N)           |                       |
    2 (N)           |                       |
                    |                       |
    [Saída]         |        [Saída]        |       [Saída]
    7               |        30             |       33

*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B, soma = 0, i;
    // Inputs
    printf("Valor de A: ");
    scanf("%d", &A);
    while (A < 1) {
        printf("Número inválido\nValor de A: ");
        scanf("%d", &A);
    }

    printf("Valor de B: ");
    scanf("%d", &B);
    while (B < 1) {
        printf("Número inválido\nValor de B: ");
        scanf("%d", &B);
    }
    // Processing
    for (i = 0; i < B; i++) { 
        soma += A;
        A++;
    }
    // Outputs6
    printf("%d", soma);
    return 0;
}