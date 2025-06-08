/*
    Escreva um algoritmo para ler vários valores, onde cada um representa a quantidade de termos da série abaixo. Calcular e escrever o valor de S para cada valor lido. O algoritmo termina ao ser informado um valor negativo ou zero.
                
                𝑆 = 1000 - 997 + 994 - 991 + ... 
                       1     2     3     4
                
                [Entrada] [Saída]
                1         1000.000000
                2         501.500000
                1000      694.725952
                30        678.788330
                3         832.833313
                0
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, j = 1000, razao = 3, termo; float sum = 0;
    // Inputs

    // Processing
    do {
        printf("Termo: "); scanf("%d", &termo);

        for (i = 1; i <= termo; i++) {    // termo 2 
            if (j % 2 == 0) {
                sum = sum + (float) j / i;
            } else {
                sum = sum - (float) j / i;
            }
            j -= razao;
        }
        
        printf("%f\n", sum);
        sum = 0;
        j = 1000;
    } while (termo > 0);
    
    // Outputs

    return 0;
}