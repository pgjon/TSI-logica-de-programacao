/*
    13.2 Escreva um algoritmo para ler 2 matrizes A 3x5 e B 3x5. Criar uma matriz S com a soma matricial de A e B e uma matriz D com a diferença entre A e B. Escrever a matriz S e logo após a matriz D.
    
    [Entrada]               [Saída]
    8 2 3 4 0 (matriz A)
    0 0 1 1 2
    1 4 3 2 5

    2 4 1 0 2 (matriz B)
    6 4 5 3 2
    3 2 3 4 5               
    
                            10 6 4 4 2 (matriz S)                     
                            6 4 6 4  4 
                            4 6 6 6 10
                            
                            6 -2  2  4 -2 (matriz D)
                           -6 -4 -4 -2  0
                           -2  2  0 -2  0
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j;
    // declarando matrizes A e B
    int matrizA[3][5], matrizB[3][5];

    // declarando matrizes S e D
    int matrizS[3][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    int matrizD[3][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Inputs
    // lendo matriz A
    printf("Lendo matriz A!\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i+1), (j+1)); scanf("%d", &matrizA[i][j]);
        }
    }

    // lendo matriz B
    printf("Lendo matriz B!\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Valor da %dº linha e %dº coluna: ", (i+1), (j+1)); scanf("%d", &matrizB[i][j]);
        }
    }
    printf("\n");
    // Processing
    // Criando a matriz S com a soma de A e B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Criando a matriz D subtraindo B de A
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matrizD[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
    // Outputs
    // imprimindo matriz S
    printf("Resultado da matriz S:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizS[i][j]); 
        }
        printf("\n");
    }

    // imprimindo matriz D
    printf("Resultado da matriz D:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matrizD[i][j]); 
        }
        printf("\n");
    }

    return 0;
}