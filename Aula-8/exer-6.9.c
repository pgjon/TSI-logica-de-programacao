/*
    6.9 Acrescenta a mensagem "Novo cálculo (1.Sim 2.Não)no fim do programa do exercício 6.8 de forma a permitir que o usuário possa informar novos dados para o cálculo da divisão.
    
    [Entrada]               [Saída]
    10 (primeiro valor)
    0  (segundo valor)      Valor inválido
    2  (segundo valor)      5
                            Novo cálculo (1.sim 2.não)?
    1  (sim)
    9  (primeiro valor)
    3  (segundo valor)      3
                            Novo cálculo (1.sim 2.não)?
    2  (não)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float num1, num2, resultado; int menu = 1;
    // Inputs
    printf("\nPrograma para calcular divisão entre dois números\n\n");
    
    printf("Digite primeiro número: "); scanf("%f", &num1);

    // Processing
    while (menu == 1) {
        // Input
        printf("Digite segundo número: "); scanf("%f", &num2);
        // Processing
        if (num2 == 0) {
            // Outputs
            printf("Valor inválido\n");
        }

        // Processing
        if (num2 != 0) {
            resultado = num1 / num2;

            // Outputs
            printf("%.2f\n", resultado);
            // Input
            printf("Novo cálculo (1.sim 2.não)? "); scanf("%d", &menu);
            // Processing
            if (menu != 1) {
                // Outputs
                printf("Até a próxima!");
                break;
            }
            // Input
            printf("Digite primeiro número: "); scanf("%f", &num1);
        }
    }

    return 0;
}