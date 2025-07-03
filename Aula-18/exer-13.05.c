/*
    14.5 Escreva um algoritmo para ler vários caracteres. Para cada caractere lido faça o seguinte: 

        Se for uma letra minúscula escreva a sua correspondente em maiúscula. 
        Se for uma letra maiúscula escreva a mensagem “Letra maiúscula”. 
        Se for um caractere que não é uma letraescrever “Não é letra”. 

    O programa termina ao ser informada o caractere '@' imprimindo a sua classificação.
    
    [Entrada]   [Saída]
    a           A
    B           Letra maiúscula
    3           Não é letra
    @           Não é letra
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    char c; 
    // Inputs
    do {
        printf("Digite um caractere: "); scanf(" %c", &c);

        if (c >= 65 && c <= 90) {
            printf("Letra maiúscula!\n");
        }

        else if (c >= 97 && c <= 122) {
            c -= 32;
            printf("%c\n", c);
        }

        else {
            printf("Não é uma letra!\n");
        }
    } while (c != '@');
    // Processing

    // Outputs

    return 0;
}