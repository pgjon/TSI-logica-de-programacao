/*
    Escreva um algoritmo para ler um inteiro Q (máximo 10). A seguir ler a idade de Q pessoas armazenando-as em um vetor. Depois ler vários inteiros que representam índices deste vetor. Para cada inteiro informado exibir a idade armazenada no vetor no respectivo índice. O algoritmo termina ao ser informado um índice inválido.
    
    [Entrada]                      [Saída]
    10 (Q)
    12 5 20 18 21 30 81 60 56 21
    0                               12
    6                               81
    9                               21
    11

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, idade[10], indice;
    // Inputs
    printf("Digite um inteiro (Q): "); scanf("%d", &Q);
    while(Q < 1 || Q > 10) {
        printf("Valor inválido!\nQ: )"); scanf("%d", &Q);
    }
    // Processing
    for (i = 0; i < Q; i++) {
        printf("Digite uma idade: "); scanf("%d", &idade[i]);
    }
    
    printf("\n");

    printf("Digite um índice de 0 a 9: "); scanf("%d", &indice);
    while (indice >= 0 && indice < 10) {
        printf("Idade acessada: %d\n\n", idade[indice]);
        printf("Digite um índice de 0 a 9: "); scanf("%d", &indice);
    } 
    // Outputs
    return 0;
}