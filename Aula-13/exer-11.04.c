/*
    O valor de Pi pode ser obtido usando a série abaixo.
    
                𝑃𝐼 = 4 − 4 + 4 − 4 + 4 − ...
                         3   5   7   9

    Escreva um algoritmo para ler vários valores, onde cada um representa a quantidade de termos da série. Calcular e escrever o valor de PI para cada valor lido. O algoritmo termina ao ser informado um valor negativo ou zero.
    
    [Entrada]   [Saída]
    30          3.108268
    31          3.173842
    500         3.139593
    1000        3.140593
    10000       3.141498
    0
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int termo, i; float pi;
    // Inputs

    // Processing
    do {
        pi = 0;

        printf("Termo: "); scanf("%d", &termo);
        
        for (i = 1; i <= termo; i++) {
            int j = 2 * i - 1; // 1, 3, 5, 7, 9 ...

            if (i % 2 == 0) {
                pi -= (float) 4 / j;
            } else {
                pi += (float) 4 / j;
            }
        }
        printf("%.6f\n", pi);
    } while  (termo > 0);
    // Outputs

    return 0;
}