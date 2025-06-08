/*
    Escreva um algoritmo para ler várias de notas. O algoritmo deverá ser encerrado ao ser fornecida uma nota inválida. Calcular e escrever a menor e a maior nota entre as notas lidas.
    
    [Entrada]                         [Saída]
    3.5  9  5  7.5  7  2  8.5  12     
                                      2 (menor nota)
                                      9 (maior nota)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota, maiorNota = 0, menorNota = 999;
    // Inputs
    printf("Programa para receber (N) notas e informar a maior e a menor entre elas.\n");
    // Processing
    do {
        printf("Nota? "); scanf("%f", &nota);
        if (nota < 0 || nota > 10) break;

        if (nota > maiorNota) {
            maiorNota = nota;
        }
        if (nota < menorNota) {
            menorNota = nota;
        }
    } while (1);
    // Outputs
    printf("%.1f (menor nota)\n", menorNota);
    printf("%.1f (maior nota)", maiorNota);
    return 0;
}