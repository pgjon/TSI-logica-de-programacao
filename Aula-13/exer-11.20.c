/*
   Escreva um algoritmo para ler um valor N e imprimir os N primeiros números perfeitos.
   
   [Entrada]   [Saída]
   4           6 28 496 8128 
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j, num, soma = 0, termo = 0;
    // Inputs
    printf("Me fale quantos números perfeitos você quer que eu te mostre: "); scanf("%d", &num);
    // Processing
    for (i = 6; i <= 10000000000; i++) {
        for (j = 1; j <= (i / 2); j++) {
            if (i % j == 0) {
                soma += j;
            }
        }

        if (soma == i) {
            printf("%d ", i);
            termo++;

            if (termo == num) break;
        }

        soma = 0;

    }
    // Outputs

    return 0;
}