/*
    1. Crie um programa que leia um número indeterminado de vezes 3 valores (a, b, c) do tipo float. Escreva a função somaValores que recebe estes 3 valores float e imprime a soma do quadrado do 1º valor juntamente com a soma dos outros dois.
    
                    Ler A, B, C
                    X = A² + (B+C) // ← utilizar função!
                
    A função somaValores deve ser chamada dentro do laço de repetição. O programa termina  quando  for  informado  um  valor  negativo  para  a  variável  A. Neste  caso,  a função somaValores não deve ser chamada.
*/
# include <stdio.h>
# include <locale.h>
# include <math.h>

float somaValores(float A, float B, float C);

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float A, B, C; 
    // Inputs

    // Processing
    while (1) {
        printf("Valor de A: "); scanf("%f", &A);
        if (A < 0) break;

        printf("Valor de B: "); scanf("%f", &B);
        printf("Valor de C: "); scanf("%f", &C);

        somaValores(A, B, C);
    }
    // Outputs

    return 0;
}

float somaValores(float A, float B, float C) {
    float x;

    x = pow(A, 2) + (B + C);

    printf("Resultado: %.2f\n", x);

    return 0;
}