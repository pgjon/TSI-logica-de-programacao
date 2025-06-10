/*
    6 Escreva um algoritmo para ler 3 valores e escrever o maior deles. Considere que o usuário
    não informará valores iguais.

    [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]
    5        | 8        | 5        | 5        | 3        | 2
    3        | 2        | 7        | 1        | 8        | 5
    1        | 5        | 2        | 9        | 4        | 6
             |          |          |          |          |
    [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]
    5        | 8        | 7        | 9        | 8        | 6
*/

# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num_1, num_2, num_3;

    printf("\nPrograma para receber 3 números inteiros e mostrar o maior entre eles.\n");

    printf("Digite primeiro número: ");
    scanf("%d", &num_1);
    printf("Digite segundo número: ");
    scanf("%d", &num_2);
    printf("Digite terceiro número: ");
    scanf("%d", &num_3);

    if ((num_1 >= num_2) && (num_1 >= num_3))
        printf("%d", num_1);
    if ((num_2 > num_1) && (num_2 >= num_3))
        printf("%d", num_2);
    if ((num_3 > num_1) && (num_3 > num_2))
        printf("%d", num_3);
    return 0;
}