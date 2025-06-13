/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler um vetor Z de Q elementos. Copiar para um vetor W, todos os elementos de Z invertendo a ordem (o primeiro elemento de W deve receber o último de Z). Escrever o vetor W após o término cópia.
    
    [Entrada]               [Saída]
    5 (Q)
    2 8 5 3 10 (vetor Z)
                            10 3 5 8 2 (vetor W)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, Z[10], W[10], aux = 0;
    // Inputs
    printf("Digite um inteiro (Q): "); scanf("%d", &Q);
    // Processing
    for (i = 0; i < Q; i++) {
        printf("Digite um número: "); scanf("%d", &Z[i]);
    }
    // Outputs
    for (i = (Q - 1); i >= 0; i--) {
        W[aux] = Z[i];
        printf("%d ", W[aux]);
        aux++;
    } 
    
    // printf("(vetor W)");
    return 0;
}