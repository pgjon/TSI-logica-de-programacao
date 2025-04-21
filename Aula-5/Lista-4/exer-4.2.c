/*
    a) Verde, Violeta
    b) Uva, Pêra, Violeta
    c) Preto, Violeta
    d) Quando A != 1 B = 2 e C = 3 
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B, C;

    // Inputs
    printf("Digite o valor de A: ");scanf("%d", &A);
    printf("Digite o valor de B: ");scanf("%d", &B);    
    printf("Digite o valor de C: ");scanf("%d", &C);    
    
    // Processing
    if (A == 1){
        printf("Verde\n");
    }else{
        if (B == 2){
            if (C == 3){
                printf("Azul\n");
            }else{
                printf("Uva\n");
                printf("Pêra\n");
            }
        }else
            printf("Preto\n");
    }
    
    // Outputs
    printf("Violeta\n");
    return 0;
}