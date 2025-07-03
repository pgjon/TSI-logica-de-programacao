/*
    14.6 Escreva um algoritmo para ler vários caracteres. Para cada caractere lido escrever uma mensagem indicando se ele é uma letra maiúscula, minúscula, dígito ou sem classificação. O programa termina ao ser informada a letra 'f' imprimindo a sua classificação.
    
    [Entrada] [Saída]
    a         Minúscula
    B         Maiúscula
    3         Dígito
    !         Sem classificação
    f         Minúscula
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
            printf("Letra minúscula!\n");
        }

        else if (c >= 48 && c <= 57) {
            printf("Dígito!\n");
        }

        else {
            printf("Sem classificação!\n");
        }
    } while (c != 'f' && c != 'F');
    // Processing

    // Outputs

    return 0;
}