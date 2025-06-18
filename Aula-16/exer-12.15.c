/******************************************************************************

        Escreva um algoritmo para ler um vetor B de 9 elementos (reserve espaço para 10 elementos) e um valor X. Incluir o valor X na primeira posição do vetor B fazendo com que os elementos existentes dentro do vetor sejam deslocados de uma posição para o final . Logo após o processamento escrever o vetor B.
        
        [Entrada]                               [Saída]
        13 -3 3 -4 -1 6 1 -42 23 (Vetor B)
        80 (x)
                                                80 13 -3 3 -4 -1 6 1 -42 23 (Vetor B)

*******************************************************************************/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, B[10], X, aux[9];
    // Inputs
    for (i = 0; i < 9; i++) {
        printf("%dº valor de B: ", (i+1)); scanf("%d", &B[i]);
        aux[i] = B[i];
    }
    
    printf("Digite valor de X: "); scanf("%d", &X);
    // Processing
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            B[i] = X;
        } else {
            B[i] = aux[i - 1];
        }
    }
    // Outputs
    for (i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    } printf("Vetor (B)");
    return 0;
}