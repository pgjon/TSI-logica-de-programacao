/*
    9.3) Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).
    
    [Entrada]           [Saída]
    3 (primeiro)
    7 (segundo)    
                        25 (soma) 
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num1, num2, soma = 0;
    // Inputs
    printf("Programa para receber dois valores e imprimir a soma entre a faixa de valores.\n");
    printf("Primeiro número: "); scanf("%d", &num1);
    printf("Primeiro segundo: "); scanf("%d", &num2);
    
    // Processing
    for (i = num1; i <= num2; i++) {
        soma += i;
        printf("%d ", i);
    }
    // Outputs
    printf("\n%d (soma)", soma);
    return 0;
}