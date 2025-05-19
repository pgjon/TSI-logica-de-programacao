/*
    8.16) Ler 10 valores e escrever quantos destes valores são negativos.
    [Entrada]                   [Saída]
    3 -1 4 -5 -10 -21 3 6 45 2   
                                4 (quantidade de valores negativos)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num, acc = 0;
    // Inputs
    printf("Programa para ler 10 valores e informar a quantidade de números negativos.\n");

    // Processing
    for (i = 0; i < 10; i++) {
        printf("Valor: "); scanf("%d", &num);

        if (num < 0) {
            acc++;
        }
    }
    // Outputs
    printf("%d (quantidade de valores negativos)", acc);
    return 0;
}