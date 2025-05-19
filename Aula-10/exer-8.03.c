/*
    8.3) Escreva um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9(inclusive).
    
    [Saída]1 3 5 7 9
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i;
    // Inputs

    // Processing
    for (i = 1; i < 10; i += 2) {
        printf("%d ", i);
    }
    // Outputs

    return 0;
}