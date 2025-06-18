/*
    Escreva um algoritmo para ler um inteiro Q (máximo 9). A seguir ler um vetor B de Q elementos (reserve espaço para 10), um valor X e um valor P que representa uma posição (índice) onde o valor X será inserido (validar o valor P aceitando apenas valores válidos de 0 a Q). Incluir o valor X na posição P do vetor B fazendo com que os elementos existentes dentro do vetor (da posição em diante) sejam deslocados de uma posição para o final. Logo após o processamento escrever o vetor B.
    
    [Entrada]                          [Saída]
    6 (Q)
    13 -3 23 -4 40 42 (Vetor B)
    80 (x)
    -1 (posição)
    7 (posição)
    2 (posição)
                                        13 -3 80 23 -4 40 42 (Vetor B)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int i, Q, X, P, B[10], aux[10], flag = 0;
    // Inputs
    printf("Digite a quantidade de Q elementos para o vetor B: "); scanf("%d", &Q);
    while((Q < 0) || (Q > 9)) {
        printf("Valor inválido!\nDigite a quantidade de Q elementos para o vetor B: "); scanf("%d", &Q);
    }
    // Processing
    for (i = 0; i < Q; i++) {
        printf("%dº valor para índice do vetor B: ", (i+1)); scanf("%d", &B[i]);
        aux[i+1] = B[i];
    }

    printf("Digite um inteiro (X): "); scanf("%d", &X);

    printf("Digite o índice que X deve ser inserido no vetor B: "); scanf("%d", &P);

    while((P < 0) || (P > Q)) {
        printf("Valor inválido!\nDigite o índice que X deve ser inserido no vetor B: "); scanf("%d", &P);
    }
    // Outputs
    for (i = 0; i < (Q + 1); i++) {

        if (flag == 1) {
            B[i] = aux[i];
        }

        if (i == P) {
            B[i] = X;
            flag = 1;
        }

        printf("%d ", B[i]);
    }

    return 0;
}