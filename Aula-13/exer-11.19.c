/*
    Número perfeito é um número natural cuja soma de seus divisores próprios (excluído o próprio número) coincide com o número. Por exemplo, o número 6 é um número perfeito, pois:
                        
                        6 = 1 + 2 + 3
                        
    Escreva um algoritmo para ler vários números. Escrever uma mensagem indicando se cada número é ou não perfeito. O algoritmo termina ao ser informado um valor nulo ou negativo.
    
    [Entrada]   [Saída]
    6           É perfeito
    10          Não é perfeito
    496         É perfeito
    -1
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num, soma = 0;
    // Inputs
    printf("Me diga um número para eu lhe dizer se ele é perfeito ou não.\nNúmero: "); scanf("%d", &num);
    // Processing
    for (i = 1; i <= (num / 2); i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    if (soma == num) {
        printf("É perfeito!");
    } else {
        printf("Não é perfeito!");
    }
    // Outputs

    return 0;
}