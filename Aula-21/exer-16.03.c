/*
    16.03) Crie um programa em C que execute dez vezes. Em cada uma dessas interações o  programa  deve  ler  um  caractere.  Desenvolva  uma  função que  receba o caractere lido como parâmetro e mostre 1 (um) caso seja uma vogal e zero caso não seja.
*/
# include <stdio.h>
# include <locale.h>

void confereCaractere(char c) {

    if (    // vogais em UPERCASE
            c == 65 || // A 
            c == 69 || // E
            c == 73 || // I
            c == 79 || // O
            c == 85 || // U
            // vogais em LOWERCASE
            c == 97 ||  // a
            c == 101 || // e
            c == 105 || // i
            c == 111 || // o
            c == 117
    ) {
        printf("1");
    } else {
        printf("0");
    }
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    char c;
    int i;
    
    // Inputs
    for (i = 0; i < 10; i++) {
        printf("\nDigite um caractere: ");
        scanf(" %c", &c);
        confereCaractere(c);
    }
    // Processing

    // Outputs

    return 0;
}