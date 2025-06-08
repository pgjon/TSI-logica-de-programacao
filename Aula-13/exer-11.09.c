/*
    Escreva um algoritmo para ler um número inteiro N (só aceitar valores positivos. Caso o N não seja positivo deverá ser lido um novo valor para o N) e escrever os divisores de N.

    [Entrada]   [Saída]
    -1 (N)
    -2 (N)
    20 (N)
                1 2 4 5 10 20
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int N, i;
    // Inputs
    printf("Digite valor de N: "); scanf("%d", &N);
    // Processing
    while (N <= 0) {
        printf("Valor de N negativo ou 0!\nDigite valor de N: "); scanf("%d", &N);
    }

    for (i = 1; i <= N; i++) {    
        if (N % i == 0) {
            printf("%d ", i);
        }
    }
    // Outputs

    return 0;
}