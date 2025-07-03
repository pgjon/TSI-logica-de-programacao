/*
    
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    // int gabarito[13], aposta[13][3], i, j;
    int i, j;
    int pontos = 0, simples = 0, duplas = 0, triplas = 0;

    int g[13] = {1, 2, 3, 1, 1, 2, 3, 3, 1, 1, 2, 2, 3};

    int a[13][3] = {
                    {1, 0, 0},
                    {1, 1, 0},
                    {1, 1, 1},
                    {0, 0, 1},
                    {0, 1, 0},
                    {0, 1, 0},
                    {1, 1, 0},
                    {0, 1, 1},
                    {1, 0, 1},
                    {1, 1, 1},
                    {0, 0, 1},
                    {1, 0, 0},
                    {0, 1, 0}
                   }
    // Inputs
    // for (i = 0; i < 13; i++) {
    //     printf("Digite %dº indice do gabarito: ", i+1); scanf("%d", &gabarito[i]);
    // }

    // for (i = 0; i < 13; i++) {
    //     printf("Linha %d: ", i);
    //     for (j = 0; j < 3; j++) {
    //         scanf("%d", &aposta[i][j]);
    //     }
    // }
    
    
    // Processing
    
    // Outputs

    return 0;
}