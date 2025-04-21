/*
    a) Amarelo, Azul, Preto, Verde
    b) Amarelo, Preto, Verde
    c) Vermelho, Laranja, Cinza
    d) Laranja, Cinza
    e) Nada será impresso
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int A, B, C, D, E;
    // Inputs
    printf("Digite valor de A: "); scanf("%d", &A);
    printf("Digite valor de B: "); scanf("%d", &B);
    printf("Digite valor de C: "); scanf("%d", &C);
    printf("Digite valor de D: "); scanf("%d", &D);
    printf("Digite valor de E: "); scanf("%d", &E);
    // Processing
    if (A == 1){
        printf("Amarelo");
        if (B == 1){
            printf("Azul");
        }
        printf("Preto");
        if (D == 1){
            printf("Verde");
        }else{
            printf("Violeta");
        }
    }else{
        if (C == 1){
            printf("Vermelho");
        }
        if (E == 1){
            printf("Laranja");
            printf("Cinza");
        }
    }

    return 0;
}