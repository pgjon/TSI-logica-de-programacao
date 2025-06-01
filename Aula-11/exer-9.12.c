/*
    9.12) Ler um valor X e um valor Z (se Z for menor que X deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em sequência ( a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível. Escrever o valor final da contagem.
                    Exemplo:
                                X   Z   Reposta
                                3  20   5 (3+4+5+6+7=25)
                                2  10   4 (2+3+4+5=14)
                               30  40   2 (30+31=61)
    
    [Entrada]       |       [Entrada]       |       [Entrada]       |       [Entrada]
    3 (X)  2 (Z)    |       2 (X)  10 (Z)   |       30(X)  40 (Z)   |       7 (X)   7 (Z)
          -1 (Z)    |                       |                       |
          20 (Z)    |                       |                       |
                    |                       |                       |  
    [Saída]         |       [Saída]         |       [Saída]         |       [Saída]
    5               |       4               |       2               |       2
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int X, Z, qtdTermos = 0, somaTermos = 0;
    // Inputs
    printf("Valor de X: "); scanf("%d", &X);
    printf("Valor de Z: "); scanf("%d", &Z);

    // Processing
    while (Z < X) {
        printf("Z é menor que X\nZ: "); scanf("%d", &Z);
    }

    while (somaTermos <= Z) {
        somaTermos += X;
        X++;
        qtdTermos++;
    }
    // Outputs
    printf("%d", qtdTermos);
    return 0;
}