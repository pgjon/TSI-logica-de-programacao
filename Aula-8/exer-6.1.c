/*
    6.1 Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve ser encerrada sem imprimir mensagem alguma.
    
    [Entrada]           [Saída]
    4                   Positivo
    -1                  Negativo
    2                   Positivo
    6                   Positivo
    -7                  Negativo
    0
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int num;

    // Processing
    do {
        // Inputs
        printf("Digite um número para eu lhe informar se ele é positivo ou negativo: ");
        scanf("%d", &num);

        // Processing
        if (num < 0){
            printf("Negativo\n");
        } else if (num > 0) {
            printf("Positivo\n");
        }
    }while (num != 0);

    return 0;
}