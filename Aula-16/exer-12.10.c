/*
    Escreva um algoritmo para ler um vetor de até 10 elementos. A leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado umvalor negativo ou zero. A seguir ler 2 inteiros que representam 2 posições(índices) no vetor (aceitar apenas índices válidos), escrever a quantidade de valores maiores que 4 existentes entre (inclusive) as posições informadas (considere que a primeira pode ser maior que a segunda e vice-versa).
    
    [Entrada]            | [Entrada]
    3 7 102 1 -1         | 2 7 4 10 4 23 12 6 10 5
    1 (prim. pos)        | 7 (prim. pos.)
    5 (seg. pos.)        | 2 (seg. pos.)
    4 (seg. pos.)        |
                         |
    [Saída]              | [Saída]
    2                    | 4
*/
# include <stdio.h>
# include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, vetor[10], acc = 0, num1, num2, qtdMaiorQue4 = 0;
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
    while (num2 < 0 || num2 > acc) {
        printf("Valor 2 digitado inválido!\nValor 2: "); scanf("%d", &num2);
    }

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Processing
    for (i = num1; i <= num2; i++) {
        if (vetor[i] > 4) {
            qtdMaiorQue4++;
        }
    }

    // Outputs
    printf("%d (Qtd maior que 4)", qtdMaiorQue4);

    return 0;
}