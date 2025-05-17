/*
    8.2) Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100 utilizando uma estrutura de repetição.
    
    [Saída]
    101 102 103 104 105 106 107 108 109 110
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num = 101, i;
    // Inputs

    // Processing
    for (i = 0; i < 10; i++) {
        printf("%d ", num);
        num++;
    }
    // Outputs

    return 0;
}