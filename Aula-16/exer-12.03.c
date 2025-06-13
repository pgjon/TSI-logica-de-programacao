/*
    Escreva um algoritmo para ler 3 valores A, B e Q. Preencher um vetor de Q elementos de forma a armazenar valores iguais a A nas posições pares e B nas posições ímpares. Escrever o conteúdo do vetor após seu total preenchimento. Considere que o valor máximo de Q é 10.
    
    [Entrada]                      [Saída]
    5 (A) 7(B)  5 (Q)              5 7 5 7 5
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, vetor[10], A, B, Q;
    // Inputs
    printf("Escreva um valor (A): "); scanf("%d", &A);
    printf("Escreva um valor (B): "); scanf("%d", &B);
    printf("Escreva um valor (Q): "); scanf("%d", &Q);
    
    // Processing
    for (i = 0; i < Q; i++){
        if (i % 2 == 0) {
            vetor[i] = A;
        } else {
            vetor[i] = B;
        }

        printf("%d ", vetor[i]);
    }
    // Outputs

    return 0;
}