/*
    Escreva um algoritmo para ler um valor inteiro X. A seguir preencher um vetor de 10 elementos com o valor X. Escrever o conteúdo do vetor após seu total preenchimento.
    
    [Entrada]                      [Saída]
    15 (x)                         15 15 15 15 15 15 15 15 15 15
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int x, i, vetor[10];
    // Inputs
    printf("Digite um valor inteiro (X): "); scanf("%d", &x);

    // Processing
    for (i = 0; i < 10; i++) {
        vetor[i] = x;
        printf("%d ", vetor[i]);
    }
    // Outputs

    return 0;
}