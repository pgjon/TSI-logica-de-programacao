/*
    Escreva um algoritmo para calcular e escrever a maior nota entre N notas lidas. O valor de N será informado pelo usuário.
    
    [Entrada]               [Saída]
    5(N)3.5  8  5  7.5  7    
                            8 (maior nota)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int N, i;
    float nota, maior = 0;
    // Inputs
    printf("Programa para receber (N) notas e informar a maior entre elas.\nN: "); scanf("%d", &N); 
    // Processing
    for (i = 1; i <= N; i++){
        printf("Nota? "); scanf("%f", &nota);

        if (nota > maior) {
            maior = nota;
        }
    }
    // Outputs
    nota = maior;
    printf("%.1f (maior nota)", nota);
    return 0;
}