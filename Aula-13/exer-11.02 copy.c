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
    
    int seq = 1, razao = 3, i, soma = 0;
    // Inputs
    
    // Processing  1 4 9 16 25 36 
    for (i = 1; i <= 100; i++) {
        printf("%d ", seq);
        seq = razao + seq;
        razao = razao + 2;  
    }
    // Outputs

    return 0;
}