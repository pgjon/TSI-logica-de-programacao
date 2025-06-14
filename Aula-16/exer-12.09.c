/*
    Escreva um algoritmo para ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. A seguir ler 2 inteiros que representam 2 posições(índices). Considere que serão informados apenas índices válidos e que o primeiro não é maior que o segundo. Escrever o maior e o menor elemento armazenado no vetor entre (inclusive) os índices lidos.
    
    [Entrada]                       [Saída]
    19 12 3 25 3 6 2 -1
    1 (primeiro índice)
    3 (segundo índice)
                                    25 (maior)  3 (menor)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, vetor[10], acc = 0, num1, num2, maior = 0, menor = 9999999;
    // Inputs
    for (i = 0; i < 10; i++) {
        printf("Digite um número: "); scanf("%d", &vetor[i]);
        if (vetor[i] < 1) break;
        
        acc++;        
    }

    printf("\nAgora vou precisar que me informe dois valores que serão o intervalo do indice dos números lidos anteriormente.\nOs valores não podem ultrapassar %d que é a quantidade de valores lidos no vetor.\n\n", acc);
    
    printf("Valor 1: "); scanf("%d", &num1);
    while (num1 < 0 || num1 > acc) {
        printf("Valor 1 digitado inválido!\nValor 1: "); scanf("%d", &num1);
    }
    printf("Valor 2: "); scanf("%d", &num2);
    while (num2 < num1 || num2 > acc) {
        printf("Valor 2 digitado não pode ser menor que o Valor 1!\nValor 2: "); scanf("%d", &num2);
    }

    // Processing
    for (i = num1; i <= num2; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
        }

        if (vetor [i] <= menor) {
            menor = vetor[i];
        }
    }

    // Outputs
    printf("%d (maior) %d (menor)", maior, menor);
    return 0;
}