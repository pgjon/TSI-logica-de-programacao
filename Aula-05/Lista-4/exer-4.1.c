/*
    Respostas:
        a) Amarelo, Azul, Verde, Roxo e Uva
        b) Amerelo, Pêra, Maça e Uva
        c) Quando A e B forem diferentes de 1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B;

    // Inputs
    printf("Digite o valor de A: ");scanf("%d", &A);
    printf("Digite o valor de B: ");scanf("%d", &B);
    printf("Amarelo");
    // Processing
    if (A == 1) {
        printf("Azul");
        printf("Verde");
        printf("Roxo");
    }else {
        printf("Pêra");
        if (B == 1) {
            printf("Maça");
        }else {
            printf("Morango");
        }
    }
    // Outputs
    printf("Uva");

    return 0;
}