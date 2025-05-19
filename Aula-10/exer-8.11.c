/*
    8.11) 8.11Escrevaum algoritmo para ler dois valores. Aceitar a dupla apenas se o segundo valor informado for maior que o primeiro. Caso isso não aconteça deve ser impressa a mensagem “Valores inválidos” e repetida a leitura dos dois valores. Imprimir os inteiros existentes entre os 2 valores lidos (incluir os valores lidos).
    
    [Entrada]                    [Saída]
    10 (primeiro) 5  (segundo)   Valores inválidos
    5  (primeiro) 3  (segundo)   Valores inválidos
    3  (primeiro) 3  (segundo)   Valores inválidos
    5  (primeiro) 10 (segundo)   5 6 7 8 9 10
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, num1, num2;
    // Inputs
    do {
        printf("Primeiro número: "); scanf("%d", &num1);
        printf("Segundo número: "); scanf("%d", &num2);
        if (num1 >= num2)
            printf("Valores inválidos!\n");
    } while (num1 >= num2);

    for (i = num1; i <= num2; i++) {
        printf("%d ", i);
    }
    // Outputs

    return 0;
}