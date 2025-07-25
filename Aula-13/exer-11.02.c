/*
    Escreva um algoritmo para calcular e escrever o valor de S.
                
                𝑆 = 1 - 2 + 3 - 04 + 05 - 06 + ... - 10
                        4   9   16   25   36        100
                
                [Saída]  0.645635

                04 para 09 = 5
                09 para 16 = 7
                16 para 25 = 9
                25 para 36 = 11   pa de razão 2 = j
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float S = 0.0;
    int i, j = 1, razaoJ = 3;
    // Inputs

    // Processing
    for (i = 1; i <= 10; i++) {
        if (j % 2 == 0) {
            S = S - (float) i / j;
        } else {
            S = S + (float) i / j;
        }
        j = j + razaoJ;
        razaoJ += 2;
    }
    // Outputs
    printf("%f", S);

    return 0;
}