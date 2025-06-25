/*

14.2 Escreva um algoritmo para ler um inteiro N. A seguir ler N caracteres. Para cada caractere lido escrever o seu respectivo código ASCII.

    [Entrada]   [Saída]
    2           (N)
    a           97
    c           99

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, charNum, N; char c;
    // Inputs
    printf("Programa para receber N caracteres e informar seu código ASCII\nValor de N: "); scanf("%d", &N);
    // Processing
    for (i = 0; i < N; i++) {
        printf("\nDigite um caractere: "); scanf(" %c", &c);
        
        charNum = c;
        
        printf("%d", charNum);
    }
    // Outputs

    return 0;
}