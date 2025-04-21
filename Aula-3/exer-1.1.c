/*
    1.1 Escreva um algoritmo que lê três valores (A, B e C) e calcule:
        1º a área de um triângulo que tem A por base e B por altura;  (b x h)/2
        2º a área do quadrado de lado B;                              A = L²
        3º a área do retângulo de lados A e B;                        A = b.h
        4º a área do círculo de raio C.                               A = ?·r²

        [Entrada]           [Saída]
        3 (A)           6 (área do triângulo)
        4 (B)           16 (área do quadrado)
        5 (C)           12 (área do retângulo)
                        78.539816 (área do círculo)

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

#define pi 3.1415926535

int main(){
    setlocale(LC_ALL, "");

    // Declaração de variáveis
    float A, B, C;

    // Entrada de dados
    printf("Digite valor de A: ");
    scanf("%f", &A);

    printf("Digite valor de B: ");
    scanf("%f", &B);

    printf("Digite valor de C: ");
    scanf("%f", &C);

    // Processamento
    float areaTriangulo = (A * B) / 2;
    float areaQuadrado = pow(B,2);
    float areaRetangulo = A * B;
    float areaCirculo = pi * pow(C,2);

    // Saída de dados
    printf("\n%.2f (área do triângulo)\n", areaTriangulo);

    printf("%.2f (área do quadrado)\n", areaQuadrado);

    printf("%.2f (área do retângulo)\n", areaRetangulo);

    printf("%.6f (área do cícurlo)\n\n\n", areaCirculo);

    return 0;
}