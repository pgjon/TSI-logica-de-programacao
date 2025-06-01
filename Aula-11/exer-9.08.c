/*
    9.8) Escreva um algoritmo que forneça quantos números devem existir em sequência a partir do 1 (1, 2, 3, 4, ...) para que a sua soma ultrapasse a 100 o mínimo possível.
    
    [Saída]
    14
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int soma = 0, qtdVezes = 0, num_atual = 1;
    // Inputs

    // Processing
    while (soma < 100) {
        soma += num_atual;
        num_atual++;
        qtdVezes++;
        printf("%d %d\n", qtdVezes, soma);
    }
    // Outputs
    printf("\n\n%d", qtdVezes);
    return 0;
}