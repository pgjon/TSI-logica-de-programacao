/*
    13.6 Escreva um algoritmo para ler a quantidade L de linhas (máximo 10) e a quantidade C de colunas (máximo 10) de uma matriz. A seguir ler uma matriz L x C. Criar 2 vetores SL que armazene a soma de cada linha da matriz e um vetor SC que armazene a soma de cada coluna da matriz. Escrever os vetores criados.
    
    [Entrada]       [Saída]          
    3 (L)    4 (C)
    2 3 2 4
    4 2 3 5
    6 4 3 4           
                    11 14 17 (SL)
                    12 9 8 13 (SC)
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

    int matrizLxC[linhas][colunas];

    // Processing
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i + 1), (j + 1));
            scanf("%d", &matrizLxC[i][j]);
        }
    }

    printf("\n");

    int somaLinhas, somaColunas;
    int SL[linhas], SC[colunas];

    for (i = 0; i < linhas; i++) {
        somaLinhas = 0;

        for (j = 0; j < colunas; j++) {
            somaLinhas += matrizLxC[i][j];
        }

        SL[i] = somaLinhas;
    }

    for (j = 0; j < colunas; j++) {
        somaColunas = 0;

        for (i = 0; i < linhas; i++) {
            somaColunas += matrizLxC[i][j];
        }

        SC[j] = somaColunas;
    }

    for (i = 0; i < linhas; i++) {
        printf("%d ", SL[i]);
    } printf("(SL)");

    printf("\n");

    for (i = 0; i < colunas; i++) {
        printf("%d ", SC[i]);
    } printf("(SC)");
    // Outputs

    return 0;
}