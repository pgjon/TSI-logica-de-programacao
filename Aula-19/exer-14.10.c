/*
    13.10 Ler um vetor G de 13 elementos que contenha o gabarito da loteria esportiva codificado da seguinte forma: 1-coluna um, 2-coluna do meio, 3-coluna dois. Logo após, ler uma matriz 13 x 3 que contenha a aposta de um jogador. Considere que cada posição da matriz armazenará o valor 1 se for apostado, 0 caso contrário. Calcular e escrever o número de pontos obtidos pelo jogador. Escrever também o número de apostas simples, dupla ou tripla utilizadas pelo apostador.
    
    [Entrada]                  [Saída]
    1 2 3 1 1 2 3 3 1 1 2 2 3
    
    1 0 0
    1 1 0
    1 1 1
    0 0 1
    0 1 0
    0 1 0
    1 1 0
    0 1 1
    1 0 1
    1 1 1
    0 0 1
    1 0 0
    0 1 0                       
                                7 (pontos)
                                7 (simples)
                                4 (duplas)
                                2 (triplas)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    // int gabarito[13], aposta[13][3], i, j;
    int i, j;
    int pontos = 0, simples = 0, duplas = 0, triplas = 0;

    int gabarito[13], aposta[13][3];

    // int gabarito[13] = {1, 2, 3, 1, 1, 2, 3, 3, 1, 1, 2, 2, 3};

    // int a[13][3] = {
    //         {1, 0, 0},
    //         {1, 1, 0},
    //         {1, 1, 1},
    //         {0, 0, 1},
    //         {0, 1, 0},
    //         {0, 1, 0},
    //         {1, 1, 0},
    //         {0, 1, 1},
    //         {1, 0, 1},
    //         {1, 1, 1},
    //         {0, 0, 1},
    //         {1, 0, 0},
    //         {0, 1, 0}
    // };

    // Inputs
    for (i = 0; i < 13; i++) {
        printf("Digite %dº indice do gabarito: ", i+1); scanf("%d", &gabarito[i]);
    }

    for (i = 0; i < 13; i++) {
        printf("%dº Linha:\n", (i + 1));
        for (j = 0; j < 3; j++) {
            printf("%dº índice da coluna: ", (j + 1));
            scanf("%d", &aposta[i][j]);
        }
    }
    
    
    // Processing
    for (i = 0; i < 13; i++) {
        int somaColuna = 0;
        for (j = 0; j < 3; j++) {
            if (((gabarito[i] == 1) && (aposta[i][j] == 1) && (j == 0)) || 
                ((gabarito[i] == 2) && (aposta[i][j] == 1) && (j == 1)) || 
                ((gabarito[i] == 3) && (aposta[i][j] == 1) && (j == 2))) 
                {
                    pontos++;
            }

            if (aposta[i][j] == 1) {
                somaColuna++;
            }
        }

        if (somaColuna == 1) {
            simples++;
        }

        if (somaColuna == 2) {
            duplas++;
        }

        if (somaColuna == 3) {
            triplas++;
        }
    }
    // Outputs
    printf("\nResultados:\n");
    printf("%d (pontos)\n", pontos);
    printf("%d (simples)\n", simples);
    printf("%d (duplas)\n", duplas);
    printf("%d (triplas)\n", triplas);

    return 0;
}