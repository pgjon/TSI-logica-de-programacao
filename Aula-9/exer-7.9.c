/*
    7.9     Escreva um algoritmo que leia vários valores e imprima quantos valores informados são menores que o imediatamente anterior. O algoritmo termina a ser informado um número negativo (que não deve ser considerado na contagem).
    
    [Entrada]   |   [Entrada]   |   [Entrada]   |   [Entrada]   |   [Entrada]
    3 -2        | 10 5 11 7 -4  | 1 2 3 4 -3    | 11 7 4 2 -8   | 12 6 6 4 9 10 4 3 -4
    
    [Saída]     |   [Saída]     |   [Saída]     |   [Saída]     |   [Saída]
    0           | 2             | 0             | 3             | 4

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int sucessor = 0, antecessor = 0, sucessorEntradaAnterior = 0, contador = 0;

    // Inputs
    printf("Programa para receber (n) números e imprimir a soma dos sucessores que são menores que os antecessores\n");
    // Processing
    while (1) {         
        printf(": "), scanf("%d", &antecessor);
        if (antecessor < 0) {
            break;
        }
        
        printf(": "), scanf("%d", &sucessor);
        if (sucessor < 0) {
            break;
        }

        if (antecessor > sucessor) {
            if (sucessorEntradaAnterior > antecessor) {
                contador++;
            }
            contador++;
        }
        
        sucessorEntradaAnterior = sucessor;
    }
    // Outputs
    printf("%d", contador);
    return 0;
}