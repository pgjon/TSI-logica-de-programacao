/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler um vetor Z de Q elementos. Copiar todos os elementos negativos do vetor Z para um vetor N (sem deixar elementos vazios entre os valores copiados). Escrever o vetor N após o término cópia.
    
    [Entrada]                               [Saída]
    10 (Q)
    2 -5 -4 18 9 -3 0 45 -2 21 (vetor Z)
                                            -5 -4 -3 -2 (vetor N)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, Z[10], N[10], count = 0;
    // Inputs
    printf("Digite um inteiro (Q): "); scanf("%d", &Q);
    // Processing
    for (i = 0; i < Q; i++) {
        printf("Digite um valor para o vetor Z: "); scanf("%d", &Z[i]);
        if (Z[i] < 0) {
            N[count] = Z[i];
            count++;
        }
    }
    // Outputs
    if (count == 0) {
        printf("Vetor Z não possui números negativos!");
    } else {
        for (i = 0; i < count; i++) {
            printf("%d ", N[i]);
        } printf("(Vetor N)");
    }
    

    return 0;
}