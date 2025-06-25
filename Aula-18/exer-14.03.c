/*

14.3 Escreva um algoritmo para ler várias duplas de caracteres e escreva uma mensagem indicando se cada dupla está em ordem crescente ou decrescente. O programa termina ao ser informado 2 caracteres iguais.

    [Entrada]   [Saída]
    a b         Crescente
    a A         Decrescente
    z z


*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    char caractere_1, caractere_2;
    // Inputs
    printf("Programa para receber dupla de caracteres e informar se é Crescente ou Decrescente.\n");
    // Processing
    while (1) {
        printf("1º Caractere: "); scanf(" %c", &caractere_1);
        printf("2º Caractere: "); scanf(" %c", &caractere_2);
        if (caractere_1 == caractere_2) break;
        
        if (caractere_1 < caractere_2) {
            printf("Crescente\n");
        } else {
            printf("Decrescente\n");
        }
        
        printf("--------------------\n");
    }
    // Outputs

    return 0;
}