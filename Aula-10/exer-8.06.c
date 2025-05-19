/*
    8.6) Escreva um algoritmo que leia um valor A e imprima os números de 1 a 20 com um incremento de A.[Entrada]               [Saída]
    4 (A)                   1 5 9 13 17
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num;
    // Inputs
    printf("Programa para receber um número inteiro positivo menor que 20\ne imprimir de 1 até 20 com razão do número inserido\n");
    printf("Número: "); scanf("%d", &num); 
    // Processing
    for (i = 1; i <= 20; i += num) {
        printf("%d ", i);
    }
    // Outputs

    return 0;
}