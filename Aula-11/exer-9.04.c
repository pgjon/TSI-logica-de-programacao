/*
    9.4) Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e vice-versa.

    [Entrada]         |  [Entrada]
    3 (primeiro)      |  7 (primeiro)
    7 (segundo)       |  3 (segundo)
                      |
    [Saída]           |  [Saída]
    25 (soma)         |  25 (soma)
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num1, num2, soma = 0, temp;
    // Inputs
    printf("Programa para receber dois valores e imprimir a soma entre a faixa de valores.\n");
    printf("Primeiro número: ");
    scanf("%d", &num1);
    printf("Primeiro segundo: ");
    scanf("%d", &num2);

    // Processing

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (i = num1; i <= num2; i++) {
        if (num1 == num2)
            soma = num1 + num2;
        else 
            soma += i;
    }
    // Outputs
    printf("\n%d (soma)", soma);
    return 0;
}