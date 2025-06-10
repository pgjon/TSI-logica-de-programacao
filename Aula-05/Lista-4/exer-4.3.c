/*
    a) Morango, Pêra, Limão
    b) Morango, Abacati, Limão
    c) Quando A != 1
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B, C;

    // Inputs
    printf("Digite o valor de A: "); scanf("%d", &A);
    printf("Digite o valor de B: "); scanf("%d", &B);
    printf("Digite o valor de C: "); scanf("%d", &C);
    // Processing
    if (A == 1) {
        printf("Morango");
        if (B == 1) {
            if (C == 1) {
                printf("Pêra"); 
            } else {
                printf("Abacate");
            }
        }
    }
    // Outputs
    printf("Limão");

    return 0;
}