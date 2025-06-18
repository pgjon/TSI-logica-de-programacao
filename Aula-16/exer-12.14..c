/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler 2 vetores X e Y de Q elementos cada um.
    Intercalar os elementos desses 2 vetores formando assim, um novo vetor S com 2Q elementos, onde nas posições pares
    de S (0,2,4,...) estejam os elementos de X e nas posições ímpares (1,3,...) os elementos de Y. 
    Após a geração completa do
    vetor R, escreva-o.

    [Entrada]                           [Saída]
    4 (Q)
    10 12 5 4 (Vetor X)
    21 60 43 23 (Vetor Y)
                                        10 21 12 60 5 43 4 23 (vetor R)
*/
# include <stdio.h>
# include <locale.h>

# define TAM 10

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, X[TAM], Y[TAM], R[TAM*2], aux = 0;
    // Inputs
    printf("Digite um valor para (Q): "); scanf("%d", &Q);
    
    // Processing
    // lendo índices de X
    for (i = 0; i < Q; i++) {
        printf("%dº valor para X: ", (i+1)); scanf("%d", &X[i]);
    }
    printf("\n");
    // lendo índices de Y
    for (i = 0; i < Q; i++) {
        printf("%dº valor para Y: ", (i+1)); scanf("%d", &Y[i]);
    }
    // integrando vetor x e y ao vetor r
    for (i = 0; i < (Q * 2); i += 2) {
        // variavel aux utilizada para pegar indice a indice de x e y
        R[i] = X[aux];
        R[i+1] = Y[aux];
        aux++;
    }
    // Outputs
    for (i = 0; i < (Q * 2); i++) {
        printf("%d ", R[i]);
    }

    return 0;
}