/*
    13.5 Escreva um algoritmo para ler a quantidade L de linhas (máximo 10) e a quantidade C de colunas (máximo 10) de uma matriz. A seguir ler uma matriz L x C (considere que serão informados apenas valores positivos). A seguir ler uma quantidade indeterminada de valores. Para cada valor escrever uma mensagem indicando se ele está ou não armazenado na matriz. Para cada valor informado, a mensagem deve ser impressa apenas uma vez. O programa termina ao ser informado um valor negativo.
    
    [Entrada]           [Saída]          
    3 (L)    4 (C)
    2 3 2 4
    1 2 3 5
    6 4 3 1
    
    1                   Está na matriz
    10                  Não está na matriz 
    5                   Está na matriz
    8                   Não está na matriz
    -1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, linhas, colunas, num, contem;
    // Inputs
    printf("Digite a quantidade de linhas da matriz: "); scanf("%d", &linhas);
    while (linhas < 1 || linhas > 10) {
        printf("Valor inválido para quantidade de linhas!\nValor deve estar entre 1 e 10!\nQtd linhas: ");
        scanf("%d", &linhas);
    }

    printf("Digite a quantidade de colunas da matriz: "); scanf("%d", &colunas);
    while (colunas < 1 || colunas > 10) {
        printf("Valor inválido para quantidade de colunas!\nValor deve estar entre 1 e 10!\nQtd colunas: ");
        scanf("%d", &colunas);
    }

    int matrizLxC[linhas][colunas];

    // Processing
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i + 1), (j + 1));
            scanf("%d", &matrizLxC[i][j]);
        }
    }

    printf("\n");

    do {
        contem = 0;

        printf("Digite um valor para saber se está na matriz: ");
        scanf("%d", &num);

        if (num < 0) break;

        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                if (num == matrizLxC[i][j]) {
                    contem++;
                }
            }
        }

        if (contem > 0) {
            printf("Está na matriz!\n");
        } else {
            printf("Não está na matriz!\n");
        }
        
    } while (1);
    // Outputs

    return 0;
}