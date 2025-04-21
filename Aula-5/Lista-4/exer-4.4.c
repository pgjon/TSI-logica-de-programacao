/*
    a) A, B, C, D, E
    b) A, B, F
    c) C, F
    d)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B, C;
    // Inputs
    printf("Digite valor de A: "); scanf("%d", &A);
    printf("Digite valor de B: "); scanf("%d", &B);
    printf("Digite valor de C: "); scanf("%d", &C);
    // Processing
    if (A == 1){
        if (B = 1){
            printf("A");
            printf("B");
        }
    }
    
    printf("C");

    if (C == 1){
        printf("D");
        printf("E");
    }else{
        printf("F");
    }

    return 0;
}