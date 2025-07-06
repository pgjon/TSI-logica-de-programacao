/*
    13.8 Escreva um algoritmo para ler a quantidade L de linhas (máximo 10) e a quantidade C de colunas (máximo 10) de uma matriz. A seguir ler uma matriz L x C (considere que serão informados apenas valores positivos). Copiar para um vetor o maior elemento de cada linha da matriz. Após o término da cópia imprimir o vetor.
    
    [Entrada]           [Saída]
    3 (L)    4 (C)
    2  8  2  4
    4 12 28 40
    1  6  4  3        
                        8 40 6
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

    int maior;
    int maiorDeCadaLinha[colunas];

    for (i = 0; i < linhas; i++) {
        maior = 0;

        for (j = 0; j < colunas; j++) {
            if (matrizLxC[i][j] > maior) {
                maior = matrizLxC[i][j];
                maiorDeCadaLinha[i] = matrizLxC[i][j];
            }
        }
    }

    // Outputs
    for (i = 0; i < linhas; i++) {
        printf("%d ", maiorDeCadaLinha[i]);
    }

    return 0;
}