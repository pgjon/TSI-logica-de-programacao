/*
    9.10) Uma sequência de valores é obtida com as seguintes regras:Sendo N um número da sequência, o próximo é calculado da seguinte forma:

        •Se N é ímpar o próximo é obtido da seguinte forma: 3*N + 1.
        •Se N é par o próximo é obtido da seguinte forma: N/2.
        •A sequência termina quando N é igual a 1.

    Escreva um algoritmo para ler uma quantidade indeterminada de inteiros. Para cada inteiro imprima a sequência gerada conforme as regras acima (considere que o valor lido é o primeiro número da sequência). O programa termina ao ser informado um inteiro igual a zero ou negativo.

    [Entrada]           [Saída]
    2                   2 1
    1                   1
    3                   3 10 5 16 8 4 2 1
    16                  16 8 4 2 1
    0
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num, n;
    // Inputs
    printf("Programa para receber um valor (N) e mostrar uma sequência de resultados:\nSe ímpar próximo será 3*N + 1\nSe par próximo será N/2\nA sequêcia termina em 1.\nQual valor de N?: ");
    scanf("%d", &num);
    // Processing

    while (num > 0) {
        n = num;
        while (n >= 1) {
            printf("%d ", n);
            if (n == 1)
                break;
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;
        }
        printf("\nDigite um número (0 ou negativo para sair): ");
        scanf("%d", &num);
    }
    return 0;
}