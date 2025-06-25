/*

14.1 Escreva um algoritmo para ler 5 caracteres e imprimir para cada um a palavra “Sim” se é uma letra maiúscula e “Não” caso contrário.

    [Entrada]   [Saída]
    a           Não
    A           Sim
    1           Não
    @           Não
    Z           Sim
*/

# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i; char c;
    // Inputs
    printf("Programa para receber caracteres e informar se ele é uma letra que está em MAIUSCULA!");
    
    // Processing
    for (i = 0; i < 5; i++) {
        printf("\nDigite um caractere: "); scanf(" %c", &c);
        
        if (c >= 65 && c <= 90) {
            printf("Sim");
        } else {
            printf("Não");
        }
    }
    // Outputs

    return 0;
}