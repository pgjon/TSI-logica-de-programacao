/*
    Escreva um algoritmo para ler um valor X (validar com repetição para aceitar apenas valores entre 1 (inclusive) e 10 (inclusive). 
    
    [Entrada]               [Saída]
    0
    11
    4                       1x4=4         
                            2x4=8
                            3x4=12
                            4x4=16
                            5x4=20
                            6x4=24
                            7x4=28
                            8x4=32
                            9x4=26
                            10x4=40
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num, res;
    // Inputs

    // Processing
    do {
        printf("Digite um valor: "); scanf("%d", &num);
    } while (num < 1 || num > 10);

    printf("TABOADA DO %d\n", num);
    for (i = 1; i <= 10; i++) {
        res = i * num;
        printf("%d x %d = %d\n", i, num, res);
    }
    // Outputs

    return 0;
}