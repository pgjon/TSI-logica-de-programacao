/*
    12. Escreva  um  algoritmo  para  ler  2  valores  (considere  que  não  serão  lidos  valores  iguais)  e
        escrever o maior deles.
*/

# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // variaveis
    int num_1, num_2;

    // entrada de dados
    printf("Digite um inteiro qualquer: ");
    scanf("%d", &num_1);

    printf("Digite outro inteiro qualquer: ");
    scanf("%d", &num_2);

    // processamento
    if (num_1 > num_2)
    {
        printf("\nO %d maior que %d!\n", num_1, num_2);
    }
    else
        printf("\nO %d maior que %d!\n", num_2, num_1);

    return 0;
}