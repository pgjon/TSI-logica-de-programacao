/*
    Escreva um algoritmo para ler um valor N (validar para aceitar apenas valores positivos utilizando uma estrutura de repetição) e imprimir a palavra PROGRAMACAO N vezes.
    [Entrada]               [Saída]
    -1
    3                       PROGRAMACAO    
                            PROGRAMACAO
                            PROGRAMACAO
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num;
    // Inputs
    printf("Programa para receber um número inteiro positivo\ne imprimir N vezes a palavra 'PROGRAMAÇÃO' ");
    printf("\nNúmero: "); scanf("%d", &num);

    // Processing
    while (num < 0) {
        printf("Número inválido!\nNúmero: "); scanf("%d", &num);
    }

    for (i = 0; i < num; i++) {
        printf("PROGRAMAÇÃO\n");
    }
    // Outputs

    return 0;
}