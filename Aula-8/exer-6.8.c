/*
    6.8 Altere a solução do exercício 6.7 para que seja impressa a mensagem “Valor inválido” caso o segundo valor informado seja ZERO.
    
    [Entrada]           [Saída]
    10 (primeiro valor)
    0  (segundo valor)   Valor inválido
    0  (segundo valor)   Valor inválido
    2  (segundo valor)   5
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float num1, num2, resultado;
    // Inputs
    printf("\nPrograma para calcular divisão entre dois números\n\n");

    printf("Digite primeiro número: "); scanf("%f", &num1);

    // Processing
    do {
        printf("Digite segundo número: "); scanf("%f", &num2);

        if (num2 == 0)
            printf("Valor inválido\n");
    } while (num2 == 0);

    resultado = num1 / num2;

    // Outputs
    printf("%.2f\n", resultado);

    return 0;
}