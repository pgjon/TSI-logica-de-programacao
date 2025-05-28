/*
    9.1) Ler 10 valores, calcular e escrever a média aritmética destes valores.
    [Entrada]                   [Saída]
    10 3 12 5 25 0 13 60 70 2    
                                20 (média)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num, soma = 0;
    float media;
    // Inputs
    printf("Programa para receber 10 valores númericos e extrair a média deles.\n");
    // Processing
    for (i = 0; i < 10; i++) {
        printf("Valor: "); scanf("%d", &num);
        soma += num;
    }

    media = (float) soma / 10;
    // Outputs
    printf("%.1f (média)", media);
    return 0;
}