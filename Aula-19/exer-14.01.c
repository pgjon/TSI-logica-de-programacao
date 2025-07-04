/*
    14.1 Escreva um algoritmo para ler uma matriz 4x4, calcular e escrever as seguintes somas dos elementos que estão armazenados:
    
        a) na linha 2 da matriz.
        b) na a coluna 1 da matriz.
        c) na diagonal principal da matriz.
        d) na diagonal secundária
        e) em toda matriz
        
    [Entrada]   [Saída]
    2 1 3 4
    0 2 1 1
    2 4 3 2
    8 6 3 2      
                11 (linha 2)           
                13 (coluna 1)
                9 (diagonal principal)
                17 (diagonal secundária)
                44 (toda matriz)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int matriz[4][4], i, j;
    int somaMatriz = 0, diagonalSeg = 0, diagonalPrin = 0, somaLinha2 = 0, somaColuna1 = 0;

    // Inputs
    printf("Programa para ler uma matriz 4x4 e imprimir soma da linha 2, soma da coluna 1, soma de seus diagonais e total da matriz.\n");

    // Processing
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i+1), (j+1)); scanf("%d", &matriz[i][j]);

            if (i == 2) {
                somaLinha2 += matriz[i][j];
            }

            if (j == 1) {
                somaColuna1 += matriz[i][j];
            }

            if (i == j) {
                diagonalPrin += matriz[i][j];
            }

            if ((i + j) == 3) {
                diagonalSeg += matriz[i][j];
            }

            somaMatriz += matriz[i][j];
        }
    }

    // Outputs
    printf("%d (linha 2)\n", somaLinha2);
    printf("%d (coluna 1)\n", somaColuna1);
    printf("%d (diagonal principal)\n", diagonalPrin);
    printf("%d (diagonal secundária)\n", diagonalSeg);
    printf("%d (toda matriz)\n", somaMatriz);
    return 0;
}