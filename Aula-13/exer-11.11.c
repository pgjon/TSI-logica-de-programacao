/*
    Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 5.
    
    [Saída] Obs: Não é necessário que as tabuadas fiquem lado a lado.
    1 x 1 = 1     1 x 2 = 2     1 x 3 = 3      1 x 4 = 4       1 x 5 = 5
    2 x 1 = 2     2 x 2 = 4     2 x 3 = 6      2 x 4 = 8       2 x 5 = 10
    3 x 1 = 3     3 x 2 = 6     3 x 3 = 9      3 x 4 = 12      3 x 5 = 15
    4 x 1 = 4     4 x 2 = 8     4 x 3 = 12     4 x 4 = 16      4 x 5 = 20
    5 x 1 = 5     5 x 2 = 10    5 x 3 = 15     5 x 4 = 20      5 x 5 = 25
    6 x 1 = 6     6 x 2 = 12    6 x 3 = 18     6 x 4 = 24      6 x 5 = 30
    7 x 1 = 7     7 x 2 = 14    7 x 3 = 21     7 x 4 = 28      7 x 5 = 35
    8 x 1 = 8     8 x 2 = 16    8 x 3 = 24     8 x 4 = 32      8 x 5 = 40
    9 x 1 = 9     9 x 2 = 18    9 x 3 = 27     9 x 4 = 36      9 x 5 = 45
   10 x 1 = 10   10 x 2 = 20   10 x 3 = 30    10 x 4 = 40     10 x 5 = 50
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, resultado = 0;
    // Inputs
    printf("Programa para mostrar taboada de 1 até 10 para os números de 1 a 5.\n");
    // Processing
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 5; j++) {
            resultado = i * j;
            if (i < 10 && resultado < 10) {
                printf("0%d x 0%d = 0%d    ", i, j, resultado);
            } else  if (i == 10){
                printf("%d x 0%d = %d    ", i, j, resultado);
            } else {
                printf("0%d x 0%d = %d    ", i, j, resultado);
            }
        }
        printf("\n");
    }
    // Outputs

    return 0;
}