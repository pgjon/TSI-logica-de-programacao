/*
    12  Escreva um algoritmo que dado um número de 1 a 7 deverá ser informado o dia da semana.
        1 - Domingo
        2 - Segunda-feira
        3 - Terça-feira
        4 - Quarta-feira
        5 - Quinta-feira
        6 - Sexta-feira
        7 - Sábado
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Variables
    int diaSemana;

    // Inputs
    printf("\nDigite um número entre 1 e 7 para infromar o dia da semana: ");
    scanf("%d", &diaSemana);

    // Processing
    switch (diaSemana)
    {
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
        printf("Terca-feira");
        break;
    case 3:
        printf("Quarta-feira");
        break;
    case 4:
        printf("Quinta-feira");
        break;
    case 5:
        printf("Sexta-feira");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;

    default:
        printf("Nao e um dia da semana");
        break;
    }
    // Outputs

    return 0;
}