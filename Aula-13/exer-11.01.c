/*
    Escreva um algoritmo para calcular e escrever o valor de S.
                
                𝑆 = 1 + 3 + 5 + 7 + ... + 99
                        2   3   4         50
                
                [Saída]  95.500793
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j = 1; float soma = 0.0;
    // Inputs

    // Processing
    for (i = 1; i < 100; i += 2) {
        soma =  soma + ((float)i / j);
        j++;
        printf("%f\n", soma);
    }
    // Outputs
    printf("\n%f", soma);
    return 0;
}