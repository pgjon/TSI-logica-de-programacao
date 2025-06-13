/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler um vetor Z de Q elementos. Copiar para um vetor W, todos os elementos de Z de forma que a ordem seja mantida. Escrever o vetor W após o término cópia.
    
    [Entrada]              [Saída]
    5 (Q)
    2 8 5 3 10 (vetor Z)
                            2 8 5 3 10 (vetor W)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, Z[10], W[10];
    // Inputs
    printf("Digite um inteiro (Q): "); scanf("%d", &Q);
    // Processing
    for (i = 0; i < Q; i++) {
        printf("Digite um número: "); scanf("%d", &Z[i]);
        W[i] = Z[i];
    }
    // Outputs
    for (i = 0; i < Q; i++) {
        printf("%d ", W[i]);
    } printf("(vetor W)");
    return 0;
}