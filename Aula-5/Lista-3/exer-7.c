/*
    7   Escreva um algoritmo para ler 3 valores e escrever a soma dos 2 maiores. Considere que o
        usuário não informará valores iguais.

        [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]| [Entrada]
        5        | 8        | 5        | 5        | 3        | 2
        3        | 2        | 7        | 1        | 8        | 5
        1        | 5        | 2        | 9        | 4        | 6
                 |          |          |          |          |
        [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]  | [Saída]
        8        | 13       | 12       | 14       | 12       | 11
*/

#include <stdio.h>

int main()
{

    int num_1, num_2, num_3, resultado;

    printf("\nPrograma para receber 3 numeros inteiros e mostrar a soma dos dois maiores.\n");

    printf("Digite primeiro numero: ");
    scanf("%d", &num_1);
    printf("Digite segundo numero: ");
    scanf("%d", &num_2);
    printf("Digite terceiro numero: ");
    scanf("%d", &num_3);

    if ((num_1 >= num_2) && (num_1 >= num_3))
    {
        if (num_2 > num_3)
            resultado = num_1 + num_2;
        else
            resultado = num_1 + num_3;
    }

    if ((num_2 > num_1) && (num_2 >= num_3))
    {
        if (num_1 > num_3)
            resultado = num_2 + num_1;
        else
            resultado = num_2 + num_3;
    }

    if ((num_3 > num_1) && (num_3 > num_2))
    {
        if (num_1 > num_2)
            resultado = num_3 + num_1;
        else
            resultado = num_3 + num_2;
    }

    printf("%d", resultado);

    return 0;
}