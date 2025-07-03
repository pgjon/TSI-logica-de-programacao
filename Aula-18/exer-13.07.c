/*
    14.7 Reescreva o exercício 14.3 fazendo com que cada caractere lido seja validado através de repetição para aceitar apenas letras (maiúsculas ou minúsculas). O programa deve considerar uma letra minúscula igual a sua respectiva maiúscula.

    [Entrada] [Saída]
    1
    Z
    !
    a      Decrescente
    a  B   Crescente
    B  a   Decrescente
    z  Z

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
        while (caractere_1)
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