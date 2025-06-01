/*
    9.9) No planeta Alpha vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida disponível todos os dias. Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passarão antes de Blobs coma todo esse suprimento até atingir 1 quilo ou menos. Considere que o valor inicial é sempre superior a 1.
    [Entrada]   |   [Entrada]   |   [Entrada]
    8           |   100         |   200
                |               |
    [Saída]     |   [Saída]     |   [Saída]
    3           |   7           |   8

*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float comida; int dias = 0;
    // Inputs
    printf("Qual capacidade de comida inicial? (KG): "); scanf("%f", &comida);

    // Processing
    while (comida > 1) {
        dias++;
        comida = (float) comida / 2;
    }
    // Outputs
    printf("%d dia(s)", dias);
    return 0;
}