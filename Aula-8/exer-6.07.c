/*
    6.7 Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser zero. Escreva um algoritmo para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. 
    
    OBS: O programa deve validar a leitura do segundo valor (que não deve ser zero). Enquanto for fornecido um valor zero a leitura (apenas do segundo valor) deve ser repetida.
    
    [Entrada]               [Saída]
    10 (primeiro valor)    
    0  (segundo valor)
    0  (segundo valor)
    2  (segundo valor)      5
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
    } while (num2 == 0);

    resultado = num1 / num2;

    // Outputs
    printf("%.2f\n", resultado);

    return 0;
}