/*
    Escreva um algoritmo para ler 2 valores A e B.Se A for igual a B devem ser lidos novos valores para A e B. Se A for menor que B calcular e imprimir a soma dos números ímpares existentes entre A (inclusive) e B (inclusive). Se A for maior que B calcular e imprimir a média aritmética dos múltiplos de 3 existentes entre A (inclusive) e B (inclusive).
        OBS: Considere que só serão informados valores inteiros positivos.

    [Entrada]        | [Entrada]       | [Entrada]        | [Entrada]
    4 (A)  4 (B)     | 4 (A)  12 (B)   | 13 (A)  4 (B)    | 15 (A)  3 (B)
    4 (A) 11 (B)     |                 |                  |
                     |                 |                  |
    [Saída]          | [Saída]         | [Saída]          | [Saída]
    32               | 32              | 9                | 9
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int a, b, soma = 0, i, media = 0, termo = 0;
    // Inputs
    printf("Valor de A: ");
    scanf("%d", &a);
    printf("Valor de B: ");
    scanf("%d", &b);

    // Processing
    while (a == b) {
        printf("Numeros iguais!\nDigite novos valores para A e B.\n");

        printf("Valor de A: ");
        scanf("%d", &a);
        printf("Valor de B: ");
        scanf("%d", &b);
    }

    if (a < b) {
        // validação para A começar em ímpar
        if (a % 2 == 0) {
            a += 1;
        }

        for (i = a; i <= b; i += 2) {
            soma += i;
        }
        printf("Soma: %d", soma);
    }
    
    else {
        for (i = a; i >= b; i--) {
            if (i % 3 == 0) {
                soma += i;
                termo++;
            }
        }
        media = soma / termo;
        printf("Média: %d", media);
    }
    // Outputs
    return 0;
}