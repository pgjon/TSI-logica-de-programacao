/*
    8.9) Escreva um algoritmo para ler várias duplas de inteiros onde o primeiro representa a quantidade de vezes que o segundo será impresso. Para cada dupla escrever o segundo valor uma quantidade de vezes representada pelo primeiro. Os valores impressos devem ser separados por um espaço em branco. O programa termina ao ser informado um valor negativo ou zero para o primeiro número (nesta situação o segundo não deve ser lido).
    [Entrada]               [Saída]
    3 5                     5 5 5
    1 7                     7
    5 4                     4 4 4 4 4
    -1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num1, num2;
    // Inputs
    printf("Programa para receber uma dupla de números\ne mostrar quantos vezes o segundo repete o primeiro");
    
    // Processing
    do {
        printf("\nInforme o primeiro múmero: "); scanf("%d", &num1);
        if (num1 <= 0) {
            break;
        }

        printf("Informe o segundo múmero: "); scanf("%d", &num2);

        for (i = 0; i < num1; i++) {
            printf("%d ", num2);
        }

    } while (1);
    // Outputs

    return 0;
}