/*
    8.5) Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes utilizando uma estrutura de repetição.
    [Entrada]           [Saída]
    5                   5 5 5 5 5 5 5 5 5 5
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num;
    // Inputs
    printf("Digite um número inteiro para eu repetilo por 10 vezes: "); scanf("%d", &num);
    // Processing
    for (i = 1; i <= 10; i++) {
        printf("%dº ", i);
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {
        if (num < 10)
            printf("%d  ", num);
        else 
            printf("%d ", num);
    }
    // Outputs

    return 0;
}