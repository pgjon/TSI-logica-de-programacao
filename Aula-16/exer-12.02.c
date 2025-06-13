/*
    Escreva um algoritmo para preencher um vetor de 10 elementos com os valores de 101 a 110. Escrever o conteúdo do vetor após seu total preenchimento.
    
    [Saída]
    101 102 103 104 105 106 107 108 109 110
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, vetor[10], num = 101;
    // Inputs

    // Processing
    for (i = 0; i < 10; i++) {
        vetor[i] = num;
        num++;
        printf("%d ", vetor[i]);
    }
    // Outputs

    return 0;
}