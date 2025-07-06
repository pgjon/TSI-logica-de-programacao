/*
    13.12 Escreva um algoritmo para ler a quantidade L de linhas (máximo 10) e a quantidade C de colunas (máximo 10) de uma matriz. A seguir ler uma matriz A com Llinhas e C colunas. Gerar uma matriz T transposta de A. Imprimir a matriz T.
    
    [Entrada]       [Saída]
    2 (L) 3 (C)
    5  3  20        
    2  1  12        
                    5   2
                    3   1
                   20  12  
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, linhas, colunas;
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

    int matrizA[linhas][colunas];

    // Processing
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i + 1), (j + 1));
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\n");
    // criando linhas e colunas para matrizT
    int linhasT = colunas, colunasT = linhas;

    int matrizT[linhasT][colunasT];

    for (i = 0; i < linhasT; i++) {
        for (j = 0; j < colunasT; j++) {
            matrizT[i][j] = matrizA[j][i];
        }
    }
    

    // Outputs
    for (i = 0; i < linhasT; i++) {
        for (j = 0; j < colunasT; j++) {
            printf("%d ", matrizT[i][j]);
        }
        printf("\n");
    }

    return 0;
}