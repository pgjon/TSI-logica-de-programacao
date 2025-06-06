/*
    9.14) A seguinte sequênciade números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que calcule e escreva os 20 primeiros termos da série.
    
    [Saída]
    0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i = 1, fib, j, anterior = 0;
    // Inputs
    printf("Programa para mostrar os 20 termos de fibonacci\n");
    
    // Processing
    for (j = 1; j <= 20; j++) {
        if (j == 1) {
            fib = 0; // First term
        } else if (j == 2) {
            fib = 1; // Second term
        } else {
            fib = i + anterior; // Fibonacci calculation
        }
        anterior = i;
        i = fib;
        printf("%d ", fib);
    }
    // Outputs

    return 0;
}